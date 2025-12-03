import pypowsybl as pp
import math
from pypowsybl_jupyter import display_sld
import pypowsybl.dynamic as dyn
from helpers import plotShow

def fiche3():
    nom_v = 1
    SnRef = 100.
    zb = nom_v * nom_v / SnRef

    network = pp.network.create_empty()

    network.create_substations(id=['TSONetwork', 'PDR'], name=['TSONetwork', 'PDR'], country=['FR', 'FR'], tso=['TSO', 'TSO'])
    network.create_substations(id='PDR2', name='PDR2', country='FR', tso='TSO')
    network.create_substations(id='Producer', name='Producer', country='FR', tso='TSO')

    network.create_voltage_levels(id='TSONetwork_VL', name='TSONetwork_VL', substation_id='TSONetwork', topology_kind='BUS_BREAKER',
                                  nominal_v=1*nom_v, low_voltage_limit=0.8*nom_v, high_voltage_limit=1.2*nom_v)
    network.create_voltage_levels(id='PDR_VL', name='PDR_VL', substation_id='PDR', topology_kind='BUS_BREAKER',
                                  nominal_v=1*nom_v, low_voltage_limit=0.8*nom_v, high_voltage_limit=1.2*nom_v)
    network.create_voltage_levels(id='PDR2_VL', name='PDR2_VL', substation_id='PDR2', topology_kind='BUS_BREAKER',
                                  nominal_v=1 * nom_v, low_voltage_limit=0.8 * nom_v, high_voltage_limit=1.2 * nom_v)
    network.create_voltage_levels(id='Producer_VL', name='Producer_VL', substation_id='Producer', topology_kind='BUS_BREAKER',
                                  nominal_v=1*nom_v, low_voltage_limit=0.8*nom_v, high_voltage_limit=1.2*nom_v)
    network.create_voltage_levels(id='ProducerGenerationUnit_VL', name='ProducerGenerationUnit_VL', substation_id='Producer', topology_kind='BUS_BREAKER',
                                  nominal_v=1*nom_v, low_voltage_limit=0.8*nom_v, high_voltage_limit=1.2*nom_v)
    network.create_voltage_levels(id='ProducerAuxiliaries_VL', name='ProducerAuxiliaries_VL', substation_id='Producer', topology_kind='BUS_BREAKER',
                                  nominal_v=1*nom_v, low_voltage_limit=0.8*nom_v, high_voltage_limit=1.2*nom_v)

    network.create_buses(id='TSONetwork_Bus', voltage_level_id='TSONetwork_VL')
    network.create_buses(id='PDR_Bus', voltage_level_id='PDR_VL')
    network.create_buses(id='PDR2_Bus', voltage_level_id='PDR2_VL')
    network.create_buses(id='Producer_Bus', voltage_level_id='Producer_VL')
    network.create_buses(id='ProducerGenerationUnit_Bus', voltage_level_id='ProducerGenerationUnit_VL')
    network.create_buses(id='ProducerAuxiliaries_Bus', voltage_level_id='ProducerAuxiliaries_VL')

    network.create_lines(id='line1', voltage_level1_id='TSONetwork_VL', bus1_id='TSONetwork_Bus',
                         voltage_level2_id='PDR2_VL', bus2_id='PDR2_Bus',
                         b1=0, b2=0, g1=0, g2=0, r=0, x=1.0908641975308642*zb)
    network.create_lines(id='line2', voltage_level1_id='TSONetwork_VL', bus1_id='TSONetwork_Bus',
                         voltage_level2_id='PDR2_VL', bus2_id='PDR2_Bus',
                         b1=0, b2=0, g1=0, g2=0, r=0, x=1.0908641975308642*zb)
    network.create_lines(id='line3', voltage_level1_id='TSONetwork_VL', bus1_id='TSONetwork_Bus',
                         voltage_level2_id='PDR2_VL', bus2_id='PDR2_Bus',
                         b1=0, b2=0, g1=0, g2=0, r=0, x=1.0908641975308642*zb)
    network.create_lines(id='line4', voltage_level1_id='TSONetwork_VL', bus1_id='TSONetwork_Bus',
                         voltage_level2_id='PDR2_VL', bus2_id='PDR2_Bus',
                         b1=0, b2=0, g1=0, g2=0, r=0, x=1.0908641975308642*zb)
    network.create_lines(id='ProducerInternalLine', voltage_level1_id='PDR_VL', bus1_id='PDR_Bus',
                         voltage_level2_id='Producer_VL', bus2_id='Producer_Bus',
                         b1=0, b2=0, g1=0, g2=0, r=0.0004*zb, x=0.004*zb)

    network.create_2_windings_transformers(id='ProducerAuxiliariesTransformer', voltage_level1_id='Producer_VL', bus1_id='Producer_Bus',
                                           voltage_level2_id='ProducerAuxiliaries_VL', bus2_id='ProducerAuxiliaries_Bus',
                                           b=0, g=0, r=0.00001*zb, x=0.00001*zb, rated_u1=1, rated_u2=1)
    network.create_2_windings_transformers(id='ProducerGenerationUnitTransformer', voltage_level1_id='Producer_VL', bus1_id='Producer_Bus',
                                           voltage_level2_id='ProducerGenerationUnit_VL', bus2_id='ProducerGenerationUnit_Bus',
                                           b=0, g=0, r=0.000303*zb, x=0.027162*zb, rated_u1=1, rated_u2=1)

    network.create_dangling_lines(id='PDR_DL', voltage_level_id='PDR_VL', bus_id='PDR_Bus', p0=75, q0=0,r=0,x=0,b=0,g=0)
    network.create_dangling_lines(id='PDR2_DL', voltage_level_id='PDR2_VL', bus_id='PDR2_Bus', p0=75, q0=0,r=0,x=0,b=0,g=0)

    network.create_generators(id='GenerationUnit', voltage_level_id='ProducerGenerationUnit_VL', bus_id='ProducerGenerationUnit_Bus',
                              target_p=75, min_p=0, max_p=100, target_q=0, energy_source='OTHER', target_v=1.0444444444444445*nom_v,
                              voltage_regulator_on=True)
    network.update_generators(id="GenerationUnit", regulated_element_id="PDR_DL")

    network.create_loads(id='Auxiliaries', voltage_level_id='ProducerAuxiliaries_VL', bus_id='ProducerAuxiliaries_Bus', p0=0.01*SnRef, q0=0.005*SnRef)

    network.create_generators(id="InfiniteBus", voltage_level_id='TSONetwork_VL', bus_id='TSONetwork_Bus',
                              target_p=75, min_p=-10000, max_p=10000, target_v=1.0444444444444445*nom_v, voltage_regulator_on=True)
    network.update_generators(id="InfiniteBus", regulated_element_id="PDR2_DL")

    parameters = pp.loadflow.Parameters(distributed_slack=True,
                                        provider_parameters={'voltageRemoteControl': 'true'})  # Do not compensate slack_bus imbalance
    results = pp.loadflow.run_ac(network, parameters=parameters, provider='OpenLoadFlow')
    for result in results:
        print(result)

    network.remove_elements(['PDR_DL', 'PDR2_DL'])
    network.remove_elements(['line1', 'line2', 'line3', 'line4'])
    network.remove_elements(['PDR2'])

    network.create_lines(id='line1', voltage_level1_id='TSONetwork_VL', bus1_id='TSONetwork_Bus',
                         voltage_level2_id='PDR_VL', bus2_id='PDR_Bus',
                         b1=0, b2=0, g1=0, g2=0, r=0, x=1.0908641975308642 * zb)
    network.create_lines(id='line2', voltage_level1_id='TSONetwork_VL', bus1_id='TSONetwork_Bus',
                         voltage_level2_id='PDR_VL', bus2_id='PDR_Bus',
                         b1=0, b2=0, g1=0, g2=0, r=0, x=1.0908641975308642 * zb)
    network.create_lines(id='line3', voltage_level1_id='TSONetwork_VL', bus1_id='TSONetwork_Bus',
                         voltage_level2_id='PDR_VL', bus2_id='PDR_Bus',
                         b1=0, b2=0, g1=0, g2=0, r=0, x=1.0908641975308642 * zb)
    network.create_lines(id='line4', voltage_level1_id='TSONetwork_VL', bus1_id='TSONetwork_Bus',
                         voltage_level2_id='PDR_VL', bus2_id='PDR_Bus',
                         b1=0, b2=0, g1=0, g2=0, r=0, x=1.0908641975308642 * zb)

    generation_unit = network.get_generators(all_attributes=True).loc['GenerationUnit']
    network.update_generators(id="GenerationUnit", target_p=-generation_unit['p'], target_q=-generation_unit['q'])

    generation_unit_bus = network.get_buses(all_attributes=True).loc['ProducerGenerationUnit_VL_0']
    network.update_generators(id="InfiniteBus", regulated_element_id="GenerationUnit", voltage_regulator_on=True, target_v=generation_unit_bus['v_mag']*nom_v)

    parameters = pp.loadflow.Parameters(distributed_slack=False,
                                        provider_parameters={'slackBusSelectionMode': 'NAME', 'slackBusesIds': 'TSONetwork_VL',
                                                             'voltageRemoteControl': 'true'})  # Do not compensate slack_bus imbalance
    result = pp.loadflow.run_ac(network, parameters=parameters, provider='OpenLoadFlow')
    print(result)

    network.remove_elements('InfiniteBus')

    filename_out = 'fiche3.xiidm'
    network.save(filename_out, format='XIIDM', parameters={'iidm.export.xml.version': '1.4'})

if __name__ == "__main__":
    fiche3()