# FILE: src/dynawo_notebooks/Scripts/core/visualizer.py
"""
Network Visualization Module.

Provides utilities to generate SVG diagrams of PyPowSyBl networks,
including macro (Network Area) and micro (Single Line) views to
ensure all components (generators, loads, lines) are visible.
"""

import logging
import pypowsybl as pp
from typing import Dict

logger = logging.getLogger(__name__)


class NetworkVisualizer:
    """
    Utility class to extract and manage PyPowSyBl network SVG diagrams.
    """

    @staticmethod
    def generate_full_system_diagrams(network: pp.network.Network) -> Dict[str, str]:
        """
        Generates both the macro (Network Area) and micro (Single Line) diagrams.

        Returns:
            Dict[str, str]: A dictionary containing the SVG strings.
                            Key 'network_area' contains the macro view.
                            Keys like 'Sub_X' contain the detailed views.
        """
        diagrams = {}
        logger.info("Generating full system visualization diagrams...")

        # 1. Macro view: Network Area Diagram (shows substations and lines)
        try:
            diagrams["network_area"] = network.get_network_area_diagram()
            logger.debug("Successfully generated Network Area Diagram.")
        except Exception as e:
            logger.warning(f"Could not generate Network Area Diagram: {e}")

        # 2. Micro view: Single Line Diagrams for each Substation (shows generators/loads)
        try:
            substations = network.get_substations().index.tolist()
            for sub_id in substations:
                try:
                    # SLD explicitly plots internal buses, generators, and shunts
                    # FIXED: Using 'container_id' as per the latest PyPowSyBl API
                    diagrams[sub_id] = network.get_single_line_diagram(container_id=sub_id)
                    logger.debug(f"Successfully generated SLD for {sub_id}.")
                except Exception as e:
                    logger.warning(f"Could not generate SLD for substation {sub_id}: {e}")
        except Exception as e:
            logger.error(f"Error accessing substations for diagrams: {e}")

        return diagrams
