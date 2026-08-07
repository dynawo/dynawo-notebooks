function _parse_matrix(txt, name, nrows, ncols)
    if nrows == 0 || ncols == 0
        return zeros(Float64, nrows, ncols)
    end
    after_name = split(txt, "Real $name[")[2]
    after_open_bracket = split(after_name, '[')[2]
    body = split(after_open_bracket, ']')[1]

    A = Matrix{Float64}(undef, nrows, ncols)
    for (i, row) in enumerate(split(body, ';'))
        for (j, value) in enumerate(split(row, ','))
            A[i, j] = parse(Float64, strip(value))
        end
    end
    return A
end

function _parse_states(txt, nstates)
    states = Vector{String}(undef, nstates)
    for hit in eachmatch(r"Real '([^']*)' = x\[(\d+)\];", txt)
        i = parse(Int, hit.captures[2])
        name = String(hit.captures[1])
        if startswith(name, "x_")
            name = name[3:end]
        end
        states[i] = name
    end
    return states
end

function linearize_scripting(omc, model; startTime, stopTime, stepSize, tolerance,
                             simflags = "", commandLineOptions = "", outdir)
    mkpath(outdir)
    if !isempty(commandLineOptions)
        sendExpression(omc, "setCommandLineOptions(\"$commandLineOptions\")")
    end
    sendExpression(omc, "cd(\"$outdir\")")
    command = "linearize($model, startTime=$startTime, stopTime=$stopTime, stepSize=$stepSize, tolerance=$tolerance, simflags=\"$simflags\")"
    sendExpression(omc, command, parsed = false)

    mo = joinpath(outdir, "linearized_model.mo")
    if !isfile(mo)
        errors = String(sendExpression(omc, "getErrorString()", parsed = false))
        error("linearize_scripting: linearization produced no output.\n$errors")
    end

    txt = read(mo, String)
    n = parse(Int, match(r"parameter Integer n = (\d+)", txt).captures[1])
    m = parse(Int, match(r"parameter Integer m = (\d+)", txt).captures[1])
    p = parse(Int, match(r"parameter Integer p = (\d+)", txt).captures[1])

    A = _parse_matrix(txt, "A", n, n)
    B = _parse_matrix(txt, "B", n, m)
    C = _parse_matrix(txt, "C", p, n)
    D = _parse_matrix(txt, "D", p, m)
    states = _parse_states(txt, n)
    return (A = A, B = B, C = C, D = D, states = states)
end
