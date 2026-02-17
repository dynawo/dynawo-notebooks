# AutoSimLib/core/grid_manager.py
import pypowsybl as pp
import pypowsybl.network as pn
import pypowsybl.loadflow as lf
import pandas as pd
import logging

# Configure logger
logger = logging.getLogger(__name__)


class GridManager:
    """
    Facade for PyPowSyBl that simplifies network creation and load flow
    result extraction for initialization.
    """

    def __init__(self, network_id="SimGrid"):
        self.network = pp.network.create_empty()
        self.network.network_id = network_id
        logger.info(f"Network '{network_id}' initialized.")

    def create_bus(self, bus_id, nominal_kv):
        """
        Creates a bus. In IIDM this involves creating a VoltageLevel and a Bus.
        We simplify this for the user.
        """
        vl_id = f"VL_{bus_id}"
        try:
            self.network.create_voltage_levels(
                id=vl_id, nominal_v=nominal_kv, topology_kind="BUS_BREAKER"
            )
            self.network.create_buses(id=bus_id, voltage_level_id=vl_id)
            logger.debug(f"Bus '{bus_id}' created at {nominal_kv} kV.")
        except Exception as e:
            logger.error(f"Error creating bus {bus_id}: {str(e)}")
            raise

    def _get_nominal_voltage(self, bus_id):
        """
        Internal method to perform reverse lookup: Bus -> VoltageLevel -> NominalV
        This allows us to convert p.u. values to kV accurately.
        """
        # 1. Get bus dataframe to find the voltage level ID
        # Snippets indicate get_bus_breaker_view_buses() returns columns including 'voltage_level_id'
        buses_df = self.network.get_bus_breaker_view_buses()
        if bus_id not in buses_df.index:
            raise ValueError(f"Bus {bus_id} does not exist in the network.")

        vl_id = buses_df.at[bus_id, "voltage_level_id"]

        # 2. Get voltage levels dataframe to find the nominal voltage
        # Snippets indicate get_voltage_levels() returns 'nominal_v' [18]
        vl_df = self.network.get_voltage_levels()
        if vl_id not in vl_df.index:
            raise ValueError(f"Voltage level {vl_id} not found for bus {bus_id}.")

        return vl_id, vl_df.at[vl_id, "nominal_v"]

    def add_source(self, id, bus_id, v_pu=1.0):
        """Adds a Voltage Source (Slack/Grid)."""
        vl_id, base_kv = self._get_nominal_voltage(bus_id)
        self.network.create_generators(
            id=id,
            bus_id=bus_id,
            target_v=v_pu * base_kv,
            voltage_level_id=vl_id,
            target_p=0.0,
            voltage_regulator_on=True,
            min_p=-9999,
            max_p=9999,  # Infinite limits
        )

    def add_battery(self, id, bus_id, p_mw, q_mvar=0):
        """
        Adds a system (modeled as negative load or PQ generator).
        For this example, we use a fixed PQ Generator.
        """
        # Note: PyPowSyBl supports create_battery, but generator is often more robust
        # for simple flows. Negative P = Charging (Load), Positive P = Discharging.
        vl_id, base_kv = self._get_nominal_voltage(bus_id)
        self.network.create_generators(
            id=id,
            bus_id=bus_id,
            target_p=p_mw,
            target_q=q_mvar,
            min_p=-100,
            max_p=100,
            voltage_level_id=vl_id,
            voltage_regulator_on=False,  # PQ Control
        )

    def add_load(self, load_id, bus_id, p_mw, q_mvar):
        """Adds a static load."""
        vl_id, base_kv = self._get_nominal_voltage(bus_id)

        self.network.create_loads(
            id=load_id,
            bus_id=bus_id,
            p0=p_mw,
            q0=q_mvar,
            voltage_level_id=vl_id,
        )

    def add_generator(self, gen_id, bus_id, target_v_pu, rated_mw):
        """
        Adds a generator (PV node) with voltage regulation.
        Target_v is converted internally to setpoint in kV.
        """
        # We need to know the nominal voltage of the bus to calculate target in kV.
        # Accessing bus dataframe to find base voltage.
        bus_df = self.network.get_bus_breaker_view_buses()

        if bus_id not in bus_df.index:
            raise ValueError(f"Bus {bus_id} does not exist.")

        # Note: PyPowSyBl might not store base voltage directly on the bus simply in all versions,
        # but we can infer it from the VoltageLevel. For simplicity, we assume user passes target in kV
        # Or we implement a reverse lookup of VoltageLevel.
        # Here we will assume target_v is explicit kV for robustness in this example.

        vl_id, base_kv = self._get_nominal_voltage(bus_id)

        self.network.create_generators(
            id=gen_id,
            bus_id=bus_id,
            voltage_level_id=vl_id,
            target_p=0.0,
            target_v=target_v_pu,  # PyPowSyBl expects kV if regulation is active
            rated_s=rated_mw * 1.2,  # Typical oversizing
            max_p=rated_mw,
            min_p=0,
            voltage_regulator_on=True,
        )

    def add_line(self, line_id, bus1, bus2, r, x, b=0):
        """Adds an AC line."""
        self.network.create_lines(
            id=line_id,
            bus1_id=bus1,
            bus2_id=bus2,
            r=r,
            x=x,
            b1=b,
            b2=b,
        )

    def run_initialization_flow(self):
        """
        Executes the load flow and returns a structured dictionary with results.
        Handles convergence verification.
        """
        logger.info("Running AC load flow...")
        results = lf.run_ac(self.network)

        # Verify convergence
        if not results:
            raise RuntimeError("Load flow failed: no results returned.")

        # Assuming a connected network, checking the main component
        main_component = results
        if main_component.status != lf.ComponentStatus.CONVERGED:
            logger.critical(f"Load Flow DID NOT CONVERGE. Status: {main_component.status}")
            logger.error("It is unsafe to use these results to initialize Modelica.")
            raise RuntimeError("Load Flow Divergence")

        logger.info("Convergence successful.")

        # Extract processed data
        return self._extract_results()

    def _extract_results(self):
        """Private method to format results."""
        buses = self.network.get_bus_breaker_view_buses()
        gens = self.network.get_generators()

        data = {"buses": {}, "generators": {}}

        # Process Buses (Voltage and Angle)
        for bus_id, row in buses.iterrows():
            data["buses"][bus_id] = {"v_mag_kv": row["v_mag"], "v_angle_deg": row["v_angle"]}

        # Process Generators (Dispatched P and Q)
        # Important: run_ac updates p and q values in the generators dataframe
        for gen_id, row in gens.iterrows():
            data["generators"][gen_id] = {"p_mw": row["p"], "q_mvar": row["q"]}

        return data
