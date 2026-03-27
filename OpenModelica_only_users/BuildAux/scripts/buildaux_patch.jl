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
