import pypowsybl.network as pn
import pypowsybl.dynamic as dyn
from helpers import plotShow

def gridforming():
    network = pn.load('fic_IIDM_clean.xiidm')
    generators = network.get_generators(all_attributes=True)

    model_mapping = dyn.ModelMapping()

    for generatorId, generatorProperties in generators.iterrows():
        if 'GFM' in generatorId:
            if abs(generatorProperties['p']) > 0.01:
                model_mapping.add_grid_forming_converter(static_id=generatorId, parameter_set_id='GFM', model_name='GridFormingConverterDroopControl')
        elif 'EOL' in generatorId:
            if abs(generatorProperties['p']) > 0.01:
                model_mapping.add_wecc(static_id=generatorId, parameter_set_id='Wind', model_name='WTG4AWeccCurrentSource')
        elif 'PV' in generatorId:
            if abs(generatorProperties['p']) > 0.01:
                model_mapping.add_wecc(static_id=generatorId, parameter_set_id='Wind', model_name='WTG4AWeccCurrentSource')

    event_mapping = dyn.EventMapping()

    variables_mapping = dyn.OutputVariableMapping()

    sim = dyn.Simulation()
    res = sim.run(network, model_mapping, event_mapping, variables_mapping, 0, 100)

    print(res.status())

if __name__ == "__main__":
    gridforming()
