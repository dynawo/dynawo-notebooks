import pypowsybl.network as pn
import pypowsybl.dynamic as dyn
from pypowsybl._pypowsybl import DynamicSimulationStatus
from helpers import Parameters, plotShow
import math

# Nucléaire : GeneratorSynchronousFourWindingsGovCt2St4b / GeneratorSynchronousFourWindingsTGov3IEEX2A
# Gaz : GeneratorSynchronousFourWindingsGovSteam1St4b / GeneratorSynchronousFourWindingsGovCt2St4b
# Hydro : GeneratorSynchronousThreeWindingsGovHydro4St4b/ GeneratorSynchronousThreeWindingsHyGovScrx


def dynaswing():
    iidm_path = "fic_IIDM_v1_2.xml"

    network = pn.load(iidm_path)

    generators = network.get_generators(all_attributes=True)
    voltage_levels = network.get_voltage_levels(all_attributes=True)
    substations = network.get_substations(all_attributes=True)

    model_mapping = dyn.ModelMapping()
    parameters = Parameters()

    for generatorId, generatorProperties in generators.iterrows():
        voltage_level_id = generators["voltage_level_id"][generatorId]
        substation_id = voltage_levels["substation_id"][voltage_level_id]
        country = substations["country"][substation_id]
        energy_source = generators["energy_source"][generatorId]
        if not math.isnan(generatorProperties["p"]):
            p = generatorProperties["p"]
            if p < -0.01:
                if country == "FR":
                    if energy_source == "NUCLEAR":
                        lib = "GeneratorSynchronousFourWindingsGoverPropVRPropInt"
                        lib_par = "GeneratorSynchronousFourWindingsGovCt2St4b"
                        # lib_par = 'GeneratorSynchronousFourWindingsTGov3IEEX2A'
                        # lib_par = 'GeneratorSynchronousFourWindingsGovSteam1St4b'
                        model_mapping.add_synchronous_generator(
                            static_id=generatorId,
                            parameter_set_id=generatorId,
                            model_name=lib,
                        )
                        parameters.addParametersSet(
                            equipment_properties=generatorProperties,
                            voltage_level_properties=voltage_levels.loc[voltage_level_id],
                            set_id=generatorId,
                            model_name=lib_par,
                        )
                    elif energy_source == "THERMAL":
                        lib = "GeneratorSynchronousFourWindingsProportionalRegulations"
                        # lib = 'GeneratorSynchronousFourWindingsGoverPropVRPropInt'
                        lib_par = "GeneratorSynchronousFourWindingsGovSteam1St4b"
                        model_mapping.add_synchronous_generator(
                            static_id=generatorId,
                            parameter_set_id=generatorId,
                            model_name=lib,
                        )
                        parameters.addParametersSet(
                            equipment_properties=generatorProperties,
                            voltage_level_properties=voltage_levels.loc[voltage_level_id],
                            set_id=generatorId,
                            model_name=lib_par,
                        )
                    elif energy_source == "HYDRO":
                        lib = "GeneratorSynchronousThreeWindingsProportionalRegulations"
                        lib_par = "GeneratorSynchronousThreeWindingsGovHydro4St4b"
                        # lib_par = 'GeneratorSynchronousThreeWindingsHyGovScrx'
                        model_mapping.add_synchronous_generator(
                            static_id=generatorId,
                            parameter_set_id=generatorId,
                            model_name=lib,
                        )
                        parameters.addParametersSet(
                            equipment_properties=generatorProperties,
                            voltage_level_properties=voltage_levels.loc[voltage_level_id],
                            set_id=generatorId,
                            model_name=lib_par,
                        )
                else:
                    print(f"{generatorId} energy_source {energy_source} p {p}")
                    lib = "GeneratorSynchronousThreeWindingsGoverPropVRPropInt"
                    # lib = 'GeneratorSynchronousFourWindingsGoverPropVRPropInt'
                    # lib_par = 'GeneratorSynchronousFourWindingsGovCt2St4b'
                    # lib_par = 'GeneratorSynchronousFourWindingsTGov3IEEX2A'
                    lib_par = "GeneratorSynchronousFourWindingsGovSteam1St4b"
                    model_mapping.add_synchronous_generator(
                        static_id=generatorId,
                        parameter_set_id=generatorId,
                        model_name=lib,
                    )
                    parameters.addParametersSet(
                        equipment_properties=generatorProperties,
                        voltage_level_properties=voltage_levels.loc[voltage_level_id],
                        set_id=generatorId,
                        model_name=lib_par,
                    )

    parameters.write("dynaswing.par")

    event_mapping = dyn.EventMapping()
    # event_mapping.add_node_fault(static_id='TRICAP64', start_time=100, fault_time=0.1, r_pu=0.0001, x_pu=0.0001)
    # event_mapping.add_disconnection(static_id='TRICA6TRANCHE1', start_time=100)
    # event_mapping.add_disconnection(static_id='TRICA6TRANCHE2', start_time=100)

    variables_mapping = dyn.OutputVariableMapping()
    variables_mapping.add_dynamic_model_curves("TRICA6TRANCHE4", "generator_PGen")

    sim = dyn.Simulation()
    res = sim.run(network, model_mapping, event_mapping, variables_mapping, 0, 100)

    status = res.status()
    print(res.status())

    if status == DynamicSimulationStatus.SUCCESS:
        curves = res.curves()
        plotShow(curves)


if __name__ == "__main__":
    dynaswing()
