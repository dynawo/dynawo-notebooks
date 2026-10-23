# scripts/linearize_scripting.py
# Linearization of a model through the OpenModelica scripting API.

import os
import re

import numpy as np

from scripts.helpers import send_expression


def _parse_matrix(txt, name, nrows, ncols):
    """
    Read the `name` matrix of `nrows` by `ncols` from the linearized model text.
    """
    if nrows == 0 or ncols == 0:
        return np.zeros((nrows, ncols))

    after_name = txt.split(f"Real {name}[")[1]
    after_open_bracket = after_name.split("[")[1]
    body = after_open_bracket.split("]")[0]

    matrix = np.empty((nrows, ncols))
    for i, row in enumerate(body.split(";")):
        for j, value in enumerate(row.split(",")):
            matrix[i, j] = float(value.strip())
    return matrix


def _parse_states(txt, nstates):
    """
    Read the names of the `nstates` linear states from the linearized model text.
    """
    states = [""] * nstates
    for hit in re.finditer(r"Real '([^']*)' = x\[(\d+)\];", txt):
        index = int(hit.group(2))
        name = hit.group(1)
        if name.startswith("x_"):
            name = name[2:]
        states[index - 1] = name
    return states


def linearize_scripting(omc, model, startTime, stopTime, stepSize, tolerance,
                        outdir, simflags="", commandLineOptions=""):
    """
    Linearize `model` in `outdir` and return its A, B, C and D matrices and its state names.
    """
    os.makedirs(outdir, exist_ok=True)
    if commandLineOptions:
        send_expression(omc, f'setCommandLineOptions("{commandLineOptions}")')
    send_expression(omc, f'cd("{outdir}")')
    command = (
        f"linearize({model}, startTime={startTime}, stopTime={stopTime}, "
        f'stepSize={stepSize}, tolerance={tolerance}, simflags="{simflags}")'
    )
    send_expression(omc, command, parsed=False)

    mo = os.path.join(outdir, "linearized_model.mo")
    if not os.path.isfile(mo):
        errors = send_expression(omc, "getErrorString()", parsed=False)
        raise RuntimeError(f"linearize_scripting: linearization produced no output.\n{errors}")

    with open(mo) as f:
        txt = f.read()

    n = int(re.search(r"parameter Integer n = (\d+)", txt).group(1))
    m = int(re.search(r"parameter Integer m = (\d+)", txt).group(1))
    p = int(re.search(r"parameter Integer p = (\d+)", txt).group(1))

    return {
        "A": _parse_matrix(txt, "A", n, n),
        "B": _parse_matrix(txt, "B", n, m),
        "C": _parse_matrix(txt, "C", p, n),
        "D": _parse_matrix(txt, "D", p, m),
        "states": _parse_states(txt, n),
    }
