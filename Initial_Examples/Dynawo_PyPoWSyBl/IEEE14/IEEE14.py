import pypowsybl.network as pn
import pypowsybl.dynamic as dyn
from helpers import plotShow


def ieee14():
    network = pn.load("IEEE14.iidm")
    generators = network.get_generators(all_attributes=True)
    voltage_levels = network.get_voltage_levels(all_attributes=True)
    loads = network.get_loads(all_attributes=True)

    model_mapping = dyn.ModelMapping()

    for generatorId, generatorProperties in generators.iterrows():
        voltage_level_id = generators["voltage_level_id"][generatorId]
        nominal_v = voltage_levels["nominal_v"][voltage_level_id]
        if nominal_v == 69.0:
            model_mapping.add_synchronous_generator(
                static_id=generatorId,
                parameter_set_id=generatorId,
                model_name="GeneratorSynchronousFourWindingsProportionalRegulations",
            )
        elif nominal_v == 13.8:
            model_mapping.add_synchronous_generator(
                static_id=generatorId,
                parameter_set_id=generatorId,
                model_name="GeneratorSynchronousThreeWindingsProportionalRegulations",
            )

    for loadId, loadsProperties in loads.iterrows():
        model_mapping.add_base_load(
            static_id=loadId,
            parameter_set_id="LoadAlphaBeta",
            model_name="LoadAlphaBeta",
        )

    event_mapping = dyn.EventMapping()
    event_mapping.add_disconnection(
        static_id="_BUS____1-BUS____5-1_AC", start_time=1, disconnect_only="TWO"
    )

    variables_mapping = dyn.OutputVariableMapping()
    variables_mapping.add_dynamic_model_curves(generators.index[0], "generator_PGen")

    sim = dyn.Simulation()
    res = sim.run(network, model_mapping, event_mapping, variables_mapping, 0, 100)

    print(res.status())
    curves = res.curves()

    plotShow(curves)


if __name__ == "__main__":
    ieee14()
