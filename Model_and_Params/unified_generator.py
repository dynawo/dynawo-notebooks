import sys
import math
import pandas as pd
import pypowsybl.network as pn
import pypowsybl.dynamic as dyn

# Local imports
from recollement_helpers import Dyd, Par, fix_voltage_regulator_on
from mapping_rules import get_model_config, calculate_parameters

def generate_dynamic_files(iidm_file, simulator="dynawo"):
    print(f"--- Generating configuration for {simulator.upper()} using {iidm_file} ---")
    
    # 1. Load and Fix Static Network
    network = pn.load(iidm_file)
    fix_voltage_regulator_on(iidm_file)
    
    # 2. Extract Network Data
    generators = network.get_generators(all_attributes=True)
    voltage_levels = network.get_voltage_levels(all_attributes=True)
    
    # 3. Initialize Output Files
    dyd_file = Dyd(iidm_file.replace(".xiidm", ".dyd").replace(".iidm", ".dyd"))
    par_file = Par(iidm_file.replace(".xiidm", ".par").replace(".iidm", ".par"))

    # 4. Process Generators
    for gen_id, gen_props in generators.iterrows():
        vl_id = gen_props['voltage_level_id']
        nominal_v = voltage_levels.at[vl_id, 'nominal_v']
        energy_source = gen_props['energy_source']

        # A. Get Model Configuration
        models_to_apply = get_model_config(simulator, energy_source, nominal_v)

        if not models_to_apply:
            print(f"[WARN] No mapping found for {gen_id} ({energy_source})")
            continue

        # B. Calculate Physical Parameters
        phys_params = calculate_parameters(gen_props, nominal_v)

        # C. Apply Configuration
        for model_info in models_to_apply:
            model_name = model_info['name']
            dyn_id = gen_id + model_info['id_suffix']
            
            # Update Mapping
            dyd_file.add_blackbox(dyn_id, lib=model_name, par_id=dyn_id, static_id=gen_id)
            
            # Update Parameters
            par_file.add_parameters(
                blackbox_id=dyn_id,
                model_name=model_name,
                equipment_properties=gen_props,
                voltage_level_properties={'nominal_v': nominal_v},
                computed_values=phys_params 
            )

    # 5. Write to Disk
    dyd_file.save()
    par_file.save()
    print(f"Successfully generated files for {simulator}.")

if __name__ == "__main__":
    target_sim = "dynawo" 
    if len(sys.argv) > 1:
        target_sim = sys.argv[1].lower()
        
    if target_sim not in ["dynawo", "dynaswing"]:
        print("Error: Simulator must be 'dynawo' or 'dynaswing'")
        sys.exit(1)

    generate_dynamic_files("fic_IIDM_clean.xiidm", simulator=target_sim)