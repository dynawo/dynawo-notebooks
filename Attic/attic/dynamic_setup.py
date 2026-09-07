# dynamic_setup.py
import pypowsybl as pp
import pandas as pd


def create_auto_event(network, event_type="trip_largest_gen", time=1.0):
    """
    Creates an event mapping based on the logic of the current network.
    """
    events = pp.dynamic.EventMapping()

    target_id = None

    if event_type == "trip_largest_gen":
        # Search for the generator with the highest nominal P (target_p)
        gens = network.get_generators()
        if not gens.empty:
            target_id = gens["target_p"].idxmax()
            print(f"Automatic event: Disconnecting largest generator ({target_id})")

            # Create disconnection event
            events.add_disconnection(
                pd.DataFrame({"id": [target_id], "time": [time], "name": [event_type]})
            )

    elif event_type == "load_step":
        # Implement global load step
        pass

    return events


def create_auto_mapping(network):
    """
    Generates a default model mapping.
    """
    mapping = pp.dynamic.ModelMapping()
    # Complex logic for default model assignment would go here
    # to ensure any network can be simulated.
    return mapping
