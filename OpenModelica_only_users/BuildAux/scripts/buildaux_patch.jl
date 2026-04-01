# scripts/buildaux_patch.jl
# Text rewrite and post-save patch helpers

module BuildAuxPatch

export
    rewrite_aux_extends,
    patch_aux_equations!,
    patch_testcase_omega_refs!

# ------------------------------------------------------------
# Regex Helper
# ------------------------------------------------------------

"""
    rewrite_aux_extends(text::String, aux_name_map::Dict{String,String}) -> String

Rewrite `extends OriginalParent` clauses so they point to auxiliary parents.
"""
function rewrite_aux_extends(text::String, aux_name_map::Dict{String, String})
    rewritten = text
    for (original_parent, aux_parent) in aux_name_map
        # Escape the parent name so regex metacharacters stay literal.
        escaped_parent = replace(original_parent, r"([.^$|()\[\]{}*+?\\])" => s"\\\1")
        
        pattern = Regex("(?m)(\\bextends\\s+)" * escaped_parent * "(\\s*[;(])")
        replacement = SubstitutionString("\\1" * aux_parent * "\\2")
        rewritten = replace(rewritten, pattern => replacement)
    end
    return rewritten
end

# ------------------------------------------------------------
# Post-Save Patches
# ------------------------------------------------------------

"""
    patch_aux_equations!(aux_file::String)

Apply targeted text patches to the saved auxiliary `.mo` file.

This function fixes specific equation lines that are easier to patch in text
than through OpenModelica API calls.
"""
function patch_aux_equations!(aux_file::String)
    txt = read(aux_file, String)
    txt = replace(txt, "BESS.injector.switchOffSignal1.value = false;" => "BESS.switchOffSignal1.value = false;")
    txt = replace(txt, "BESS.injector.switchOffSignal2.value = false;" => "BESS.switchOffSignal2.value = false;")
    txt = replace(txt, "BESS.injector.switchOffSignal3.value = false;" => "BESS.switchOffSignal3.value = false;")
    txt = replace(txt, "BESS2.injector.switchOffSignal1.value = false;" => "BESS2.switchOffSignal1.value = false;")
    txt = replace(txt, "BESS2.injector.switchOffSignal2.value = false;" => "BESS2.switchOffSignal2.value = false;")
    txt = replace(txt, "BESS2.injector.switchOffSignal3.value = false;" => "BESS2.switchOffSignal3.value = false;")
    txt = replace(txt, "  der(generatorSynchronous.lambdafPu) = 0;" => "")
    txt = replace(txt, "  der(generatorSynchronous.lambdaDPu) = 0;" => "")
    txt = replace(txt, "  der(generatorSynchronous.lambdaQ1Pu) = 0;" => "")
    txt = replace(txt, "  der(generatorSynchronous.lambdaQ2Pu) = 0;" => "")
    txt = replace(txt, "  der(generatorSynchronous.theta) = 0;" => "")
    txt = replace(txt, "  der(generatorSynchronous.omegaPu) = 0;" => "")

    # DoubleInertialGrid / DIGrid cleanup after replacing InertialGrid components.
    txt = replace(
        txt,
        r"(?m)^\s*Dynawo\.Types\.Frequency\s+deltaFrequency\b.*\n" => "",
    )
    txt = replace(
        txt,
        r"(?m)^\s*deltaFrequency\s*=\s*inertialGrid1\.reducedOrderSFR\.deltaFrequency\s*-\s*inertialGrid2\.reducedOrderSFR\.deltaFrequency\s*;\s*\n" => "",
    )
    txt = replace(
        txt,
        r"(?m)^\s*inertialGrid1\.injectorURI\.switchOffSignal[123]\.value\s*=\s*false\s*;\s*\n" => "",
    )
    txt = replace(
        txt,
        r"(?m)^\s*inertialGrid2\.injectorURI\.switchOffSignal1\.value\s*=\s*false\s*;\s*$" => "  inertialGrid2.switchOffSignal1.value = false;",
    )
    txt = replace(
        txt,
        r"(?m)^\s*inertialGrid2\.injectorURI\.switchOffSignal2\.value\s*=\s*false\s*;\s*$" => "  inertialGrid2.switchOffSignal2.value = false;",
    )
    txt = replace(
        txt,
        r"(?m)^\s*inertialGrid2\.injectorURI\.switchOffSignal3\.value\s*=\s*false\s*;\s*$" => "  inertialGrid2.switchOffSignal3.value = false;",
    )
    txt = replace(
        txt,
        r"(?m)^\s*der\(inertialGrid1\.reducedOrderSFR\.PspPu\)\s*=\s*0\s*;\s*\n" => "",
    )
    txt = replace(
        txt,
        r"(?m)^\s*der\(inertialGrid2\.reducedOrderSFR\.PspPu\)\s*=\s*0\s*;\s*\n" => "",
    )

    # Make DIGrid loadPQ static in the auxiliary model.
    txt = replace(
        txt,
        "  Dynawo.Electrical.Controls.Basics.Step PrefPu_loadPQ(Value0 = 0, Height = 1, tStep = 10);" =>
        "  Dynawo.Electrical.Controls.Basics.SetPoint PrefPu_loadPQ(Value0 = 0);",
    )
    txt = replace(
        txt,
        "  loadPQ.PRefPu = PrefPu_loadPQ.step;" =>
        "  loadPQ.PRefPu = PrefPu_loadPQ.setPoint;",
    )
    txt = replace(
        txt,
        r"(?ms)^\s*when\s+time\s*>\s*10\s+then\s*\n\s*loadPQ\.deltaP\s*=\s*.*?;\s*\n\s*end\s+when;\s*\n" => "",
    )
    txt = replace(
        txt,
        "  der(loadPQ.QRefPu) = 0;" =>
        "  der(loadPQ.PRefPu) = 0;\n  der(loadPQ.QRefPu) = 0;",
    )
    txt = replace(
        txt,
        "  loadPQ.deltaQ = 0;" =>
        "  loadPQ.deltaP = 0;\n  loadPQ.deltaQ = 0;",
    )
    write(aux_file, txt)
    return nothing
end

"""
    patch_testcase_omega_refs!(aux_file::String)

Apply targeted text cleanup for `TestCase` omegaCOI and generator omegaRef lines.
"""
function patch_testcase_omega_refs!(aux_file::String)
    txt = read(aux_file, String)

    txt = replace(
        txt,
        r"(?m)^\s*Dynawo\.Types\.AngularVelocityPu\s+omegaCOI\b.*\n" => "",
    )

    txt = replace(
        txt,
        r"(?ms)^\s*omegaCOI\s*=.*?;\s*\n" => "",
    )

    txt = replace(
        txt,
        r"(?m)^\s*g\d+\.generatorSynchronous\.omegaRefPu\s*=\s*omegaCOI\s*;\s*\n" => "",
    )

    txt = replace(
        txt,
        r"(?m)^\s*g\d+\.omegaRefPu\s*=\s*omegaCOI\s*;\s*\n" => "",
    )

    write(aux_file, txt)
    return nothing
end

end # module
