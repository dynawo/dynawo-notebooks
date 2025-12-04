import pypowsybl.network as pn
import math
from helpers import Parameters
from recollement_helpers import correctVoltageRegulatorOn


def recollementWithTfo():
    iidm_path = "fic_IIDM_v1_2.xml"

    correctVoltageRegulatorOn(iidm_path)

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
                        if energy_source == "THERMAL" or energy_source == "NUCLEAR":
                            lib = "GeneratorSynchronousFourWindingsGoverPropVRPropInt"
                            parameters.addParametersSet(
                                equipment_properties=generatorProperties,
                                voltage_level_properties=voltage_levels.loc[voltage_level_id],
                                set_id=generatorId,
                                model_name=lib,
                            )
                        elif energy_source == "HYDRO":
                            lib = "GeneratorSynchronousThreeWindingsProportionalRegulations"
                            parameters.addParametersSet(
                                equipment_properties=generatorProperties,
                                voltage_level_properties=voltage_levels.loc[voltage_level_id],
                                set_id=generatorId,
                                model_name=lib,
                            )
                    else:
                        if energy_source == "THERMAL" or energy_source == "NUCLEAR":
                            lib = "GeneratorSynchronousFourWindingsGoverPropVRPropIntTfoAuxUva"
                            parameters.addParametersSet(
                                equipment_properties=generatorProperties,
                                voltage_level_properties=voltage_levels.loc[voltage_level_id],
                                set_id=generatorId,
                                model_name=lib,
                            )
                        elif energy_source == "HYDRO":
                            lib = (
                                "GeneratorSynchronousThreeWindingsProportionalRegulationsTfoAuxUva"
                            )
                            parameters.addParametersSet(
                                equipment_properties=generatorProperties,
                                voltage_level_properties=voltage_levels.loc[voltage_level_id],
                                set_id=generatorId,
                                model_name=lib,
                            )
                else:
                    if nominal_v < 30:
                        lib = "GeneratorSynchronousThreeWindingsProportionalRegulations"
                        parameters.addParametersSet(
                            equipment_properties=generatorProperties,
                            voltage_level_properties=voltage_levels.loc[voltage_level_id],
                            set_id=generatorId,
                            model_name=lib,
                        )
                    else:
                        lib = "GeneratorSynchronousThreeWindingsProportionalRegulationsTfoUva"
                        parameters.addParametersSet(
                            equipment_properties=generatorProperties,
                            voltage_level_properties=voltage_levels.loc[voltage_level_id],
                            set_id=generatorId,
                            model_name=lib,
                        )

    parameters.write("recollementWithTfo.par")


if __name__ == "__main__":
    recollementWithTfo()
