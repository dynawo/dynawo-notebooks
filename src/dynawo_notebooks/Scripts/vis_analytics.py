# vis_analytics.py
import matplotlib.pyplot as plt
import pandas as pd


def plot_generic_curves(curves_df, variable_pattern="_u", title="Voltage Profile"):
    """
    Plots columns matching a pattern (e.g., '_u' for voltage in IIDM/Dynawo).

    Args:
        curves_df (pd.DataFrame): Simulation result.
        variable_pattern (str): Substring to filter columns (e.g., '_q' for reactive).
    """
    if curves_df is None or curves_df.empty:
        print("No data to plot.")
        return

    # Dynamic column filtering
    cols_to_plot = [c for c in curves_df.columns if variable_pattern in c]

    if not cols_to_plot:
        print(f"Warning: No variables found with pattern '{variable_pattern}'")
        # Fallback: plot the first 5 columns
        cols_to_plot = curves_df.columns[:5]

    plt.figure(figsize=(10, 6))
    for col in cols_to_plot:
        plt.plot(curves_df.index, curves_df[col], label=col)

    plt.title(title)
    plt.xlabel("Time (s)")
    plt.ylabel("Magnitude")
    plt.legend(bbox_to_anchor=(1.05, 1), loc="upper left")
    plt.grid(True, alpha=0.3)
    plt.tight_layout()
    plt.show()
