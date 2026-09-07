# AutoSimLib/utils/units.py
import numpy as np


class UnitConverter:
    """Static class for unit normalization between domains."""

    @staticmethod
    def kv_to_volts(kv_value):
        """Converts kilovolts to volts."""
        return kv_value * 1000.0

    @staticmethod
    def mw_to_watts(mw_value):
        """Converts megawatts to watts."""
        return mw_value * 1e6

    @staticmethod
    def deg_to_rad(degrees):
        """Converts degrees to radians."""
        return degrees * (np.pi / 180.0)

    @staticmethod
    def pu_to_si(pu_value, base_value):
        """Converts per-unit to SI units given a base value."""
        return pu_value * base_value
