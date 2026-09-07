def get_model_config(simulator, energy_source, nominal_v):
    """
    Returns the list of dynamic models and their parameter prefixes
    based on the simulator and generator type.
    """

    # --- DYNAWO MAPPING ---
    if simulator == "dynawo":
        if energy_source == "NUCLEAR":
            return [
                {
                    "name": "GeneratorSynchronousFourWindingsProportionalRegulations",
                    "id_suffix": "",
                }
            ]

        elif energy_source == "HYDRO":
            # Voltage level differentiation
            if nominal_v < 30.0:
                return [
                    {
                        "name": "GeneratorSynchronousThreeWindingsProportionalRegulations",
                        "id_suffix": "",
                    }
                ]
            else:
                return [
                    {
                        "name": "GeneratorSynchronousThreeWindingsProportionalRegulations",
                        "id_suffix": "",
                    }
                ]

        elif energy_source == "THERMAL":
            return [
                {
                    "name": "GeneratorSynchronousFourWindingsProportionalRegulations",
                    "id_suffix": "",
                }
            ]

        # Default case
        return [
            {
                "name": "GeneratorSynchronousThreeWindingsProportionalRegulations",
                "id_suffix": "",
            }
        ]

    # --- DYNASWING MAPPING ---
    elif simulator == "dynaswing":
        # Mapping for specific Governor and Voltage Regulator models
        if energy_source == "NUCLEAR":
            return [
                {"name": "GovCt2", "id_suffix": "_Gov"},
                {"name": "St4b", "id_suffix": "_Exc"},
            ]

        elif energy_source == "HYDRO":
            return [
                {"name": "GovHydro4", "id_suffix": "_Gov"},
                {"name": "Scrx", "id_suffix": "_Exc"},
            ]

        elif energy_source == "THERMAL":
            return [
                {"name": "GovSteam", "id_suffix": "_Gov"},
                {"name": "IEEX2A", "id_suffix": "_Exc"},
            ]

    return []


def calculate_parameters(generator_props, nominal_v):
    """
    Calculates common physical parameters to ensure consistency
    across different simulators.
    """
    max_p = generator_props["max_p"]
    rated_s = generator_props["rated_s"]

    # PNom calculation logic
    if rated_s < max_p:
        p_nom = 0.9 * rated_s
        p_base_mw = 0.8 * rated_s
    else:
        p_nom = 0.9 * max_p
        p_base_mw = 0.8 * max_p

    # SNom calculation logic (handle missing rated_S)
    if rated_s != rated_s:
        s_nom = 1.1 * max_p
    else:
        s_nom = rated_s

    return {"PNom": p_nom, "PBaseMw": p_base_mw, "SNom": s_nom, "NominalV": nominal_v}
