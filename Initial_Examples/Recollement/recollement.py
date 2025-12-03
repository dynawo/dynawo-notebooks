import pypowsybl.network as pn
import pypowsybl.dynamic as dyn
import math
from helpers import Parameters, plotShow
from recollement_helpers import correctVoltageRegulatorOn, updateGeneratorsRatedS

def recollement():
    iidm_path = 'fic_IIDM_v1_2.xml'
    #par_path = 'fic_PAR.xml'
    #dyd_path = 'fic_DYD.xml'

    correctVoltageRegulatorOn(iidm_path)

    network = pn.load(iidm_path)
    #updateGeneratorsRatedS(par_path, dyd_path, network)

    generators = network.get_generators(all_attributes=True)
    voltage_levels = network.get_voltage_levels(all_attributes=True)
    substations = network.get_substations(all_attributes=True)
    svarcs = network.get_static_var_compensators(all_attributes=True)

    model_mapping = dyn.ModelMapping()
    parameters = Parameters()

    for generatorId, generatorProperties in generators.iterrows():
        voltage_level_id = generators['voltage_level_id'][generatorId]
        substation_id = voltage_levels['substation_id'][voltage_level_id]
        country = substations['country'][substation_id]
        energy_source = generators['energy_source'][generatorId]
        if not math.isnan(generatorProperties["p"]):
            p = generatorProperties["p"]
            if p < -0.01:
                if country == "FR":
                    if energy_source == "THERMAL" or energy_source == "NUCLEAR":
                        lib = 'GeneratorSynchronousFourWindingsGoverPropVRPropInt'
                        model_mapping.add_synchronous_generator(static_id=generatorId, parameter_set_id=generatorId, model_name=lib)
                        parameters.addParametersSet(equipment_properties=generatorProperties, voltage_level_properties=voltage_levels.loc[voltage_level_id], set_id=generatorId, model_name=lib)
                    elif energy_source == "HYDRO":
                        lib = 'GeneratorSynchronousThreeWindingsProportionalRegulations'
                        model_mapping.add_synchronous_generator(static_id=generatorId, parameter_set_id=generatorId, model_name=lib)
                        parameters.addParametersSet(equipment_properties=generatorProperties, voltage_level_properties=voltage_levels.loc[voltage_level_id], set_id=generatorId, model_name=lib)
                else:
                    lib = 'GeneratorSynchronousThreeWindingsProportionalRegulations'
                    model_mapping.add_synchronous_generator(static_id=generatorId, parameter_set_id=generatorId, model_name=lib)
                    parameters.addParametersSet(equipment_properties=generatorProperties, voltage_level_properties=voltage_levels.loc[voltage_level_id], set_id=generatorId, model_name=lib)

    for svarcId, svarcProperties in svarcs.iterrows():
        voltage_level_id = svarcs['voltage_level_id'][svarcId]
        lib = 'StaticVarCompensator'
        model_mapping.add_base_static_var_compensator(static_id=svarcId, parameter_set_id=svarcId, model_name=lib)
        parameters.addParametersSet(equipment_properties=svarcProperties, voltage_level_properties=voltage_levels.loc[voltage_level_id], set_id=svarcId, model_name=lib)

    parameters.write('recollement.par')

    event_mapping = dyn.EventMapping()
    event_mapping.add_disconnection(static_id='TRICA6TRANCHE1', start_time=1000)
    event_mapping.add_disconnection(static_id='TRICA6TRANCHE2', start_time=1000)

    variables_mapping = dyn.OutputVariableMapping()
    variables_mapping.add_dynamic_model_curves("TRICA6TRANCHE4", 'generator_PGen')

    sim = dyn.Simulation()
    res = sim.run(network, model_mapping, event_mapping, variables_mapping, 0, 2000)

    print(res.status())
    curves = res.curves()

    plotShow(curves)

if __name__ == "__main__":
    recollement()