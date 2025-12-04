import pypowsybl as pp


def smib2():
    nom_v = 1
    SnRef = 100.0
    zb = nom_v * nom_v / SnRef

    network = pp.network.create_empty()

    network.create_substations(
        id=["S1", "S2"], name=["S1", "S2"], country=["FR", "FR"], tso=["SMIB", "SMIB"]
    )

    network.create_voltage_levels(
        id="VL1",
        name="VL1",
        substation_id="S1",
        topology_kind="BUS_BREAKER",
        nominal_v=1 * nom_v,
        low_voltage_limit=0.8 * nom_v,
        high_voltage_limit=1.2 * nom_v,
    )
    network.create_voltage_levels(
        id="VL2",
        name="VL2",
        substation_id="S2",
        topology_kind="BUS_BREAKER",
        nominal_v=1 * nom_v,
        low_voltage_limit=0.8 * nom_v,
        high_voltage_limit=1.2 * nom_v,
    )
    network.create_voltage_levels(
        id="VL3",
        name="VL3",
        substation_id="S2",
        topology_kind="BUS_BREAKER",
        nominal_v=1 * nom_v,
        low_voltage_limit=0.8 * nom_v,
        high_voltage_limit=1.2 * nom_v,
    )

    network.create_buses(id="VL1_BUS1", voltage_level_id="VL1")

    network.create_buses(id="VL2_BUS1", voltage_level_id="VL2")

    network.create_buses(id="VL3_BUS1", voltage_level_id="VL3")

    network.create_lines(
        id="line1",
        voltage_level1_id="VL1",
        bus1_id="VL1_BUS1",
        voltage_level2_id="VL2",
        bus2_id="VL2_BUS1",
        b1=0,
        b2=0,
        g1=0,
        g2=0,
        r=0,
        x=0.022522 * zb,
    )

    network.create_lines(
        id="line2",
        voltage_level1_id="VL1",
        bus1_id="VL1_BUS1",
        voltage_level2_id="VL2",
        bus2_id="VL2_BUS1",
        b1=0,
        b2=0,
        g1=0,
        g2=0,
        r=0,
        x=0.04189 * zb,
    )

    network.create_2_windings_transformers(
        id="TR",
        voltage_level1_id="VL2",
        bus1_id="VL2_BUS1",
        voltage_level2_id="VL3",
        bus2_id="VL3_BUS1",
        b=0,
        g=0,
        r=0,
        x=0.00675 * zb,
        rated_u1=1,
        rated_u2=1,
    )

    network.create_generators(
        id="SM",
        voltage_level_id="VL3",
        bus_id="VL3_BUS1",
        target_p=1998,
        min_p=0,
        max_p=2220,
        target_q=968,
        energy_source="NUCLEAR",
        voltage_regulator_on=False,
    )

    network.create_generators(
        id="InfiniteBus",
        voltage_level_id="VL1",
        bus_id="VL1_BUS1",
        target_p=0,
        min_p=-10000,
        max_p=10000,
        target_v=1 * nom_v,
        voltage_regulator_on=True,
    )
    network.update_generators(id="InfiniteBus", regulated_element_id="SM")

    parameters = pp.loadflow.Parameters(
        distributed_slack=False,
        provider_parameters={
            "slackBusSelectionMode": "NAME",
            "slackBusesIds": "VL1_0",
            "voltageRemoteControl": "true",
        },
    )  # Do not compensate slack_bus imbalance
    result = pp.loadflow.run_ac(network, parameters=parameters, provider="OpenLoadFlow")

    network.update_generators(id="InfiniteBus", target_p=0, target_q=0)

    filename_out = "smib_infiniteBus.xiidm"
    network.save(filename_out, format="XIIDM", parameters={"iidm.export.xml.version": "1.4"})


if __name__ == "__main__":
    smib2()
