import pypowsybl.network as pn
from helpers import Parameters
import math

# Nucléaire : GeneratorSynchronousFourWindingsGovCt2St4b / GeneratorSynchronousFourWindingsTGov3IEEX2A
# Gaz : GeneratorSynchronousFourWindingsGovSteam1St4b / GeneratorSynchronousFourWindingsGovCt2St4b
# Hydro : GeneratorSynchronousThreeWindingsGovHydro4St4b/ GeneratorSynchronousThreeWindingsHyGovScrx


def dynaswingWithTfo():
    iidm_path = "fic_IIDM_v1_2.xml"

    network = pn.load(iidm_path)

    generators = network.get_generators(all_attributes=True)
    voltage_levels = network.get_voltage_levels(all_attributes=True)
    substations = network.get_substations(all_attributes=True)

    parameters = Parameters()

    for generatorId, generatorProperties in generators.iterrows():
        voltage_level_id = generators["voltage_level_id"][generatorId]
        substation_id = voltage_levels["substation_id"][voltage_level_id]
        country = substations["country"][substation_id]
        energy_source = generators["energy_source"][generatorId]
        nominal_v = voltage_levels["nominal_v"][voltage_level_id]
        if not math.isnan(generatorProperties["p"]):
            p = generatorProperties["p"]
            if p < -0.01:
                if country == "FR":
                    if nominal_v < 30:
                        if energy_source == "NUCLEAR":
                            lib = "GeneratorSynchronousFourWindingsGoverPropVRPropInt"
                            lib_par = "GeneratorSynchronousFourWindingsGovCt2St4b"
                            parameters.addParametersSet(
                                equipment_properties=generatorProperties,
                                voltage_level_properties=voltage_levels.loc[voltage_level_id],
                                set_id=generatorId,
                                model_name=lib_par,
                            )
                        elif energy_source == "THERMAL":
                            lib = "GeneratorSynchronousFourWindingsProportionalRegulations"
                            lib_par = "GeneratorSynchronousFourWindingsGovSteam1St4b"
                            parameters.addParametersSet(
                                equipment_properties=generatorProperties,
                                voltage_level_properties=voltage_levels.loc[voltage_level_id],
                                set_id=generatorId,
                                model_name=lib_par,
                            )
                        elif energy_source == "HYDRO":
                            lib = "GeneratorSynchronousThreeWindingsProportionalRegulations"
                            lib_par = "GeneratorSynchronousThreeWindingsGovHydro4St4b"
                            parameters.addParametersSet(
                                equipment_properties=generatorProperties,
                                voltage_level_properties=voltage_levels.loc[voltage_level_id],
                                set_id=generatorId,
                                model_name=lib_par,
                            )
                    else:
                        if energy_source == "NUCLEAR":
                            lib = "GeneratorSynchronousFourWindingsGoverPropVRPropIntTfoAuxUva"
                            # lib_par = 'GeneratorSynchronousFourWindingsGovCt2St4bAuxTfo'
                            lib_par = "GeneratorSynchronousFourWindingsGovSteam1St4bAuxTfo"
                            parameters.addParametersSet(
                                equipment_properties=generatorProperties,
                                voltage_level_properties=voltage_levels.loc[voltage_level_id],
                                set_id=generatorId,
                                model_name=lib_par,
                            )
                        elif energy_source == "THERMAL":
                            lib = (
                                "GeneratorSynchronousFourWindingsProportionalRegulationsTfoAuxUva"
                            )
                            lib_par = "GeneratorSynchronousFourWindingsGovSteam1St4bAuxTfo"
                            parameters.addParametersSet(
                                equipment_properties=generatorProperties,
                                voltage_level_properties=voltage_levels.loc[voltage_level_id],
                                set_id=generatorId,
                                model_name=lib_par,
                            )
                        elif energy_source == "HYDRO":
                            lib = (
                                "GeneratorSynchronousThreeWindingsProportionalRegulationsTfoAuxUva"
                            )
                            lib_par = "GeneratorSynchronousThreeWindingsGovHydro4St4bAuxTfo"
                            parameters.addParametersSet(
                                equipment_properties=generatorProperties,
                                voltage_level_properties=voltage_levels.loc[voltage_level_id],
                                set_id=generatorId,
                                model_name=lib_par,
                            )
                else:
                    if nominal_v < 30:
                        print(f"{generatorId} energy_source {energy_source} p {p}")
                        lib = "GeneratorSynchronousThreeWindingsGoverPropVRPropInt"
                        lib_par = "GeneratorSynchronousFourWindingsGovSteam1St4b"
                        parameters.addParametersSet(
                            equipment_properties=generatorProperties,
                            voltage_level_properties=voltage_levels.loc[voltage_level_id],
                            set_id=generatorId,
                            model_name=lib_par,
                        )
                    else:
                        print(f"{generatorId} energy_source {energy_source} p {p}")
                        lib = "GeneratorSynchronousThreeWindingsGoverPropVRPropIntTfoAuxUva"
                        lib_par = "GeneratorSynchronousFourWindingsGovSteam1St4bAuxTfo"
                        parameters.addParametersSet(
                            equipment_properties=generatorProperties,
                            voltage_level_properties=voltage_levels.loc[voltage_level_id],
                            set_id=generatorId,
                            model_name=lib_par,
                        )

    parameters.write("dynaswingWithTfo.par")


if __name__ == "__main__":
    dynaswingWithTfo()
