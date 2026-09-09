"""
Dynawo CLI Runner Module.

This module provides utilities to copy existing PyPowSyBl dynamic simulation
files from the system's temporary directory, modify the configuration files
(like enabling initialization dumps), and execute the Dynawo engine directly
via the command line interface.
"""

import os
import shutil
import subprocess
import tempfile
import xml.etree.ElementTree as ET
import logging
import glob

logger = logging.getLogger("DynawoCLIRunner")


class DynawoCLIRunner:
    """
    Handles the external execution of Dynawo simulations by copying
    the temporary files, dynamically tweaking the .jobs configuration,
    and invoking the Dynawo shell executable.
    """

    @staticmethod
    def _find_latest_temp_dir() -> str:
        """
        Finds the most recently created Dynawo temporary directory in the OS temp folder.
        """
        temp_base = tempfile.gettempdir()

        # Search for folders starting with "dynawo_" in the system temp directory
        search_pattern = os.path.join(temp_base, "dynawo_*")
        # Ensure we also check /tmp explicitly for Linux environments
        linux_pattern = "/tmp/dynawo_*"

        dirs = glob.glob(search_pattern) + glob.glob(linux_pattern)
        valid_dirs = [d for d in set(dirs) if os.path.isdir(d)]

        if not valid_dirs:
            return ""

        # Return the directory that was modified most recently
        return max(valid_dirs, key=os.path.getmtime)

    @staticmethod
    def copy_and_run(export_folder: str, dynawo_sys_path: str) -> None:
        """
        Locates the latest PyPowSyBl temp folder, copies the input files
        (ignoring the outputs folder), modifies the .jobs file to force
        an initialization dump, and runs the simulation via CLI.
        """
        logger.info("Locating the latest PyPowSyBl temporary directory...")

        latest_temp_dir = DynawoCLIRunner._find_latest_temp_dir()

        if not latest_temp_dir:
            logger.critical("Could not find any Dynawo temporary directory.")
            return

        logger.info(f"Latest temporary directory found: {latest_temp_dir}")

        dynamic_dir = os.path.join(export_folder, "dynamic_files")

        # 1. Copy files ignoring the 'outputs' directory and any existing logs
        try:
            if os.path.exists(dynamic_dir):
                shutil.rmtree(dynamic_dir)

            shutil.copytree(
                latest_temp_dir,
                dynamic_dir,
                ignore=shutil.ignore_patterns("outputs", "*.out", "*.err"),
            )
            logger.info(f"Files successfully copied to {dynamic_dir} (excluding 'outputs')")
        except Exception as e:
            logger.critical(f"Failed to copy simulation files: {e}")
            return

        # 2. Modify the .jobs file to enable dumpInitValues
        jobs_file = None
        for file in os.listdir(dynamic_dir):
            if file.endswith(".jobs"):
                jobs_file = os.path.join(dynamic_dir, file)
                break

        if jobs_file:
            logger.info(f"Modifying jobs file: {jobs_file}")

            # Register namespace to preserve the "dyn:" prefix in the output XML
            ET.register_namespace("dyn", "http://www.rte-france.com/dynawo")
            try:
                tree = ET.parse(jobs_file)
                root = tree.getroot()

                ns = {"dyn": "http://www.rte-france.com/dynawo"}
                dump_tags = root.findall(".//dyn:dumpInitValues", ns)

                if dump_tags:
                    for dump_tag in dump_tags:
                        dump_tag.set("local", "true")
                        dump_tag.set("global", "true")

                    tree.write(jobs_file, encoding="utf-8", xml_declaration=True)
                    logger.info("Jobs file modified successfully: dumpInitValues set to true.")
                else:
                    logger.warning("dumpInitValues tag not found in the .jobs file.")
            except Exception as e:
                logger.error(f"Error parsing or writing the .jobs file: {e}")
        else:
            logger.critical(".jobs file not found in the export directory.")
            return

        # 3. Execute Dynawo via command line using subprocess
        if jobs_file:
            logger.info("Starting Dynawo execution via command line...")

            dynawo_executable = os.path.join(dynawo_sys_path, "dynawo.sh")
            original_cwd = os.getcwd()
            os.chdir(dynamic_dir)

            try:
                process = subprocess.run(
                    [dynawo_executable, "jobs", os.path.basename(jobs_file)],
                    capture_output=True,
                    text=True,
                )

                print()

                if process.returncode == 0:
                    print("\n" + "=" * 50)
                    print("SUCCESS: CLI Simulation completed without errors.")
                    print("--- Dynawo Output Tail ---")
                    print("\n".join(process.stdout.splitlines()[-15:]))
                    print("=" * 50 + "\n")
                else:
                    print("\n" + "=" * 50)
                    print(f"FAILED: CLI Simulation returned error code {process.returncode}.")
                    print("--- Error Output ---")
                    print(process.stderr)
                    print("=" * 50 + "\n")

            except Exception as e:
                logger.error(f"An error occurred while executing Dynawo: {e}")
            finally:
                os.chdir(original_cwd)
