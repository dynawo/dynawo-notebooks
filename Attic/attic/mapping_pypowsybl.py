import pandas as pd
import pypowsybl as pp
from pypowsybl import dynamic


class UnifiedSimulation:
    """
    Unified class for the management and execution of dynamic simulations in PyPowSyBl.
    Replaces manual generation of .dyd and .par files using the dynamic API.
    """

    def __init__(self, network_source, start_time=0, stop_time=20):
        """
        Initializes the simulation by loading the network and preparing mapping containers.

        Args:
            network_source (str | pp.network.Network): Path to the network file or already loaded Network object.
            start_time (float): Simulation start time in seconds.
            stop_time (float): Simulation end time in seconds.
        """
        # Static network loading
        if isinstance(network_source, str):
            print(f"Loading network from: {network_source}")
            self.network = pp.network.load(network_source)
        else:
            self.network = network_source

        # Initialization of PyPowSyBl mapping objects
        # These objects will act as accumulators for dynamic definitions
        self.model_mapping = dynamic.ModelMapping()
        self.event_mapping = dynamic.EventMapping()
        self.output_mapping = dynamic.OutputVariableMapping()

        # Global simulation parameters configuration
        self.parameters = dynamic.Parameters(start_time=start_time, stop_time=stop_time)

        print("System initialized. Ready to configure mappings.")

    def map_generators(self, default_model="GeneratorSynchronousThreeWindings"):
        """
        Translates the model assignment logic for generators.
        Identifies connected generators and assigns models based on their energy source.
        """
        print("Starting synchronous generator mapping...")

        # 1. Get static data
        # Retrieve the complete DataFrame of generators from the static network
        gens_df = self.network.get_generators()

        # 2. Filtering
        # We are only interested in connected generators. Disconnected ones do not participate in initial dynamics.
        active_gens = gens_df[gens_df["connected"] == True].copy()

        if active_gens.empty:
            print("Warning: No connected generators found.")
            return

        # 3. Mapping DataFrame Construction
        # The index of the mapping DataFrame MUST be the equipment ID in the static network.
        mapping_df = pd.DataFrame(index=active_gens.index)

        # 4. Model Selection Logic (Replaces if/else from legacy code)
        # Example: If source is NUCLEAR use one model, if HYDRO use another.
        if "energy_source" in active_gens.columns:
            mapping_df["model"] = active_gens["energy_source"].apply(
                lambda x: "GeneratorHydro" if x == "HYDRO" else default_model
            )
        else:
            mapping_df["model"] = default_model

        # 5. Parameter Set Assignment
        # Define which set of physical parameters (Inertia, Reactances) to use.
        mapping_df["parameter_set"] = active_gens.index + "_PAR"

        # 6. Registration in ModelMapping
        try:
            self.model_mapping.add_synchronous_generator(mapping_df)
            print(f"Successfully mapped {len(mapping_df)} generators.")
        except Exception as e:
            print(f"Critical error mapping generators: {e}")

    def run(self):
        """
        Execution of the dynamic simulation.
        """
        print("Starting dynamic simulation...")
        sim_engine = dynamic.Simulation()

        try:
            # Synchronous execution
            result = sim_engine.run(
                self.network,
                self.model_mapping,
                self.event_mapping,
                self.output_mapping,
                self.parameters,
            )

            if result.status.name == "SUCCESS":
                print("Simulation completed successfully.")
                self._analyze_results(result)
            else:
                print(f"Simulation failed. Status: {result.status}")
                print(f"Error detail: {result.status_text}")

            return result

        except Exception as e:
            print(f"Systemic error during execution: {e}")
            return None

    def _analyze_results(self, result):
        """
        Basic result processing.
        """
        print("\n--- Event Timeline ---")
        print(result.timeline.head())

        if result.curves is not None:
            print(f"\nCurves generated for {len(result.curves.columns)} variables.")
