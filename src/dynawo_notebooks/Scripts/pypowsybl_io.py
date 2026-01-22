# pypowsybl_io.py
import pypowsybl as pp
import os


def load_generic_network(source: str):
    """
    Loads a network from a file or generator, validating its integrity.
    """
    if source == "ieee14":
        return pp.network.create_ieee14()

    if not os.path.exists(source):
        raise FileNotFoundError(f"Network file not found: {source}")

    network = pp.network.load(source)

    # Basic topology validation
    buses = network.get_buses()
    if buses.empty:
        raise ValueError("The loaded network contains no buses.")

    return network


def export_results(results_df, filename="simulation_results.csv"):
    """Saves results in a standardized way."""
    if results_df is not None:
        results_df.to_csv(filename)
        print(f"Results saved to {filename}")
