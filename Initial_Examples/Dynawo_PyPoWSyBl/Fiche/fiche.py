import pypowsybl as pp
import pypowsybl.dynamic as dyn
from helpers import plotShow


def fiche():
    nom_v = 1
    SnRef = 100.0
    zb = nom_v * nom_v / SnRef

    network = pp.network.create_empty()

    network.create_substations(
        id=["TSONetwork", "PDR"],
        name=["TSONetwork", "PDR"],
        country=["FR", "FR"],
        tso=["TSO", "TSO"],
    )
    network.create_substations(id="Producer", name="Producer", country="FR", tso="TSO")

    network.create_voltage_levels(
        id="TSONetwork_VL",
        name="TSONetwork_VL",
        substation_id="TSONetwork",
        topology_kind="BUS_BREAKER",
        nominal_v=1 * nom_v,
        low_voltage_limit=0.8 * nom_v,
        high_voltage_limit=1.2 * nom_v,
    )
    network.create_voltage_levels(
        id="PDR_VL",
        name="PDR_VL",
        substation_id="PDR",
        topology_kind="BUS_BREAKER",
        nominal_v=1 * nom_v,
        low_voltage_limit=0.8 * nom_v,
        high_voltage_limit=1.2 * nom_v,
    )
    network.create_voltage_levels(
        id="Producer_VL",
        name="Producer_VL",
        substation_id="Producer",
        topology_kind="BUS_BREAKER",
        nominal_v=1 * nom_v,
        low_voltage_limit=0.8 * nom_v,
        high_voltage_limit=1.2 * nom_v,
    )
    network.create_voltage_levels(
        id="ProducerGenerationUnit_VL",
        name="ProducerGenerationUnit_VL",
        substation_id="Producer",
        topology_kind="BUS_BREAKER",
        nominal_v=1 * nom_v,
        low_voltage_limit=0.8 * nom_v,
        high_voltage_limit=1.2 * nom_v,
    )
    network.create_voltage_levels(
        id="ProducerAuxiliaries_VL",
        name="ProducerAuxiliaries_VL",
        substation_id="Producer",
        topology_kind="BUS_BREAKER",
        nominal_v=1 * nom_v,
        low_voltage_limit=0.8 * nom_v,
        high_voltage_limit=1.2 * nom_v,
    )

    network.create_buses(id="TSONetwork_Bus", voltage_level_id="TSONetwork_VL")
    network.create_buses(id="PDR_Bus", voltage_level_id="PDR_VL")
    network.create_buses(id="Producer_Bus", voltage_level_id="Producer_VL")
    network.create_buses(
        id="ProducerGenerationUnit_Bus", voltage_level_id="ProducerGenerationUnit_VL"
    )
    network.create_buses(id="ProducerAuxiliaries_Bus", voltage_level_id="ProducerAuxiliaries_VL")

    network.create_lines(
        id="line1",
        voltage_level1_id="TSONetwork_VL",
        bus1_id="TSONetwork_Bus",
        voltage_level2_id="PDR_VL",
        bus2_id="PDR_Bus",
        b1=0,
        b2=0,
        g1=0,
        g2=0,
        r=0,
        x=1.0908641975308642 * zb,
    )
    network.create_lines(
        id="line2",
        voltage_level1_id="TSONetwork_VL",
        bus1_id="TSONetwork_Bus",
        voltage_level2_id="PDR_VL",
        bus2_id="PDR_Bus",
        b1=0,
        b2=0,
        g1=0,
        g2=0,
        r=0,
        x=1.0908641975308642 * zb,
    )
    network.create_lines(
        id="line3",
        voltage_level1_id="TSONetwork_VL",
        bus1_id="TSONetwork_Bus",
        voltage_level2_id="PDR_VL",
        bus2_id="PDR_Bus",
        b1=0,
        b2=0,
        g1=0,
        g2=0,
        r=0,
        x=1.0908641975308642 * zb,
    )
    network.create_lines(
        id="line4",
        voltage_level1_id="TSONetwork_VL",
        bus1_id="TSONetwork_Bus",
        voltage_level2_id="PDR_VL",
        bus2_id="PDR_Bus",
        b1=0,
        b2=0,
        g1=0,
        g2=0,
        r=0,
        x=1.0908641975308642 * zb,
    )
    network.create_lines(
        id="ProducerInternalLine",
        voltage_level1_id="PDR_VL",
        bus1_id="PDR_Bus",
        voltage_level2_id="Producer_VL",
        bus2_id="Producer_Bus",
        b1=0,
        b2=0,
        g1=0,
        g2=0,
        r=0.0004 * zb,
        x=0.004 * zb,
    )

    network.create_2_windings_transformers(
        id="ProducerAuxiliariesTransformer",
        voltage_level1_id="Producer_VL",
        bus1_id="Producer_Bus",
        voltage_level2_id="ProducerAuxiliaries_VL",
        bus2_id="ProducerAuxiliaries_Bus",
        b=0,
        g=0,
        r=0.00001 * zb,
        x=0.00001 * zb,
        rated_u1=1,
        rated_u2=1,
    )
    network.create_2_windings_transformers(
        id="ProducerGenerationUnitTransformer",
        voltage_level1_id="Producer_VL",
        bus1_id="Producer_Bus",
        voltage_level2_id="ProducerGenerationUnit_VL",
        bus2_id="ProducerGenerationUnit_Bus",
        b=0,
        g=0,
        r=0.000303 * zb,
        x=0.027162 * zb,
        rated_u1=1,
        rated_u2=1,
    )

    network.create_generators(
        id="GenerationUnit",
        voltage_level_id="ProducerGenerationUnit_VL",
        bus_id="ProducerGenerationUnit_Bus",
        target_p=0.7603667061097353 * SnRef,
        min_p=0,
        max_p=100,
        target_q=0.02144559036115612 * SnRef,
        energy_source="OTHER",
        voltage_regulator_on=False,
    )

    network.create_loads(
        id="Auxiliaries",
        voltage_level_id="ProducerAuxiliaries_VL",
        bus_id="ProducerAuxiliaries_Bus",
        p0=0.01 * SnRef,
        q0=0.005 * SnRef,
    )

    network.create_generators(
        id="InfiniteBus",
        voltage_level_id="TSONetwork_VL",
        bus_id="TSONetwork_Bus",
        target_p=0,
        min_p=-10000,
        max_p=10000,
        target_v=1.045326553450806 * nom_v,
        voltage_regulator_on=True,
    )
    network.update_generators(id="InfiniteBus", regulated_element_id="GenerationUnit")

    parameters = pp.loadflow.Parameters(
        distributed_slack=False,
        provider_parameters={
            "slackBusSelectionMode": "NAME",
            "slackBusesIds": "TSONetwork_VL",
            "voltageRemoteControl": "true",
        },
    )  # Do not compensate slack_bus imbalance
    result = pp.loadflow.run_ac(network, parameters=parameters, provider="OpenLoadFlow")
    print(result)
    network.remove_elements("InfiniteBus")

    filename_out = "fiche.xiidm"
    network.save(filename_out, format="XIIDM", parameters={"iidm.export.xml.version": "1.4"})

    model_mapping = dyn.ModelMapping()
    model_mapping.add_infinite_bus(
        static_id="TSONetwork_Bus",
        parameter_set_id="InfiniteBus",
        model_name="InfiniteBus",
    )
    model_mapping.add_synchronous_generator(
        static_id="GenerationUnit",
        parameter_set_id="GenerationUnit",
        model_name="GeneratorSynchronousFourWindingsProportionalRegulations",
    )

    event_mapping = dyn.EventMapping()
    variables_mapping = dyn.OutputVariableMapping()
    variables_mapping.add_dynamic_model_curves("GenerationUnit", "generator_PGen")

    sim = dyn.Simulation()
    res = sim.run(network, model_mapping, event_mapping, variables_mapping, 0, 100)

    print(res.status())
    curves = res.curves()

    plotShow(curves)


if __name__ == "__main__":
    fiche()
