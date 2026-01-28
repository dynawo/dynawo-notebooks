import os
import glob
import xml.etree.ElementTree as ET
import json
import argparse
import urllib.request
import urllib.parse
import zipfile
import tempfile
import shutil


def parse_dynawo_xmls(folder_path, output_folder):
    """
    Parses XML files in the given folder to extract dyn:unitDynamicModel attributes.

    Args:
        folder_path (str): The directory containing XML files.
        output_folder (str): The DIRECTORY where the JSON file will be saved.
    """

    # 1. Define the namespace found in Dynawo XMLs
    namespaces = {"dyn": "http://www.rte-france.com/dynawo"}

    # CONSTANT: The file name is fixed.
    FIXED_FILENAME = "parsed_models_data.json"

    # Dictionary to store Name -> List of initNames
    models_with_init = {}

    # Set to store Names that were found without an initName
    names_observed_without_init = set()

    # 2. Get all XML files in the directory (recursive search)
    search_path = os.path.join(folder_path, "**", "*.xml")
    xml_files = glob.glob(search_path, recursive=True)

    if not xml_files:
        print(f"No XML files found in: {folder_path}")
        return

    print(f"Found {len(xml_files)} XML files in '{folder_path}'. Processing...")

    # 3. Iterate through files
    for file_path in xml_files:
        try:
            tree = ET.parse(file_path)
            root = tree.getroot()

            # Find all dyn:unitDynamicModel occurrences
            units = root.findall(".//dyn:unitDynamicModel", namespaces)

            for unit in units:
                # CHANGED: We now use 'name' as the key instead of 'id'
                unit_name_attr = unit.get("name")
                init_name = unit.get("initName")

                if unit_name_attr:
                    # Case A: initName exists
                    if init_name:
                        if unit_name_attr not in models_with_init:
                            models_with_init[unit_name_attr] = []

                        # CHANGED: Check if initName already exists in the list to avoid duplicates
                        if init_name not in models_with_init[unit_name_attr]:
                            models_with_init[unit_name_attr].append(init_name)

                    # Case B: initName does not exist
                    else:
                        names_observed_without_init.add(unit_name_attr)

        except ET.ParseError as e:
            print(f"Error parsing XML file {file_path}: {e}")
        except Exception as e:
            print(f"Unexpected error processing {file_path}: {e}")

    # 4. Final Logic Check
    # Requirement: If a Name was found without initName, but THAT SAME Name was found
    # with an initName in another file, it must be removed from the "missing" list.

    # We subtract the keys of the valid dictionary from the set of missing Names.
    final_missing_list = list(names_observed_without_init - set(models_with_init.keys()))

    # 5. Prepare Output Data
    output_data = {
        "models_with_init_name": models_with_init,
        "models_missing_init_name": final_missing_list,
    }

    # 6. Save to JSON file
    try:
        # Create output directory if it does not exist
        if output_folder and not os.path.exists(output_folder):
            print(f"Creating output directory: {output_folder}")
            os.makedirs(output_folder, exist_ok=True)

        # Construct the full path with the fixed filename
        full_output_path = os.path.join(output_folder, FIXED_FILENAME)

        with open(full_output_path, "w", encoding="utf-8") as f:
            json.dump(output_data, f, indent=4)
        print(f"Successfully saved results to: {full_output_path}")
    except IOError as e:
        print(f"Error writing output file: {e}")


def download_and_extract_zip(url):
    """
    Downloads a ZIP file from a URL to a temporary directory and extracts it.

    Args:
        url (str): The URL of the ZIP file.

    Returns:
        str: The path to the temporary directory containing extracted files.
    """
    temp_dir = tempfile.mkdtemp(prefix="dynawo_xml_")
    zip_path = os.path.join(temp_dir, "downloaded_content.zip")

    print(f"Downloading data from: {url}...")
    try:
        # Download the file
        with urllib.request.urlopen(url) as response, open(zip_path, "wb") as out_file:
            shutil.copyfileobj(response, out_file)

        # Extract the file
        print("Extracting files...")
        with zipfile.ZipFile(zip_path, "r") as zip_ref:
            zip_ref.extractall(temp_dir)

        return temp_dir

    except Exception as e:
        # Cleanup on failure
        shutil.rmtree(temp_dir)
        raise RuntimeError(f"Failed to download or extract ZIP: {e}")


def download_github_repository(gh_url):
    """
    Handles GitHub URLs.
    """
    parsed = urllib.parse.urlparse(gh_url)
    path_parts = parsed.path.strip("/").split("/")

    if len(path_parts) < 4 or path_parts[2] != "tree":
        if len(path_parts) == 2:
            owner, repo = path_parts[0], path_parts[1]
            branch = "main"
            sub_path = ""
        else:
            raise ValueError(
                "Invalid GitHub URL format. Expected: github.com/owner/repo/tree/branch/path"
            )
    else:
        owner = path_parts[0]
        repo = path_parts[1]
        branch = path_parts[3]
        sub_path = "/".join(path_parts[4:])

    download_url = f"https://github.com/{owner}/{repo}/archive/refs/heads/{branch}.zip"

    temp_dir = tempfile.mkdtemp(prefix="dynawo_gh_")
    zip_path = os.path.join(temp_dir, "repo.zip")

    print(f"Detected GitHub Repo: {owner}/{repo} (branch: {branch})")
    print(f"Downloading archive from: {download_url}...")

    try:
        with urllib.request.urlopen(download_url) as response, open(zip_path, "wb") as out_file:
            shutil.copyfileobj(response, out_file)

        print("Extracting repository...")
        with zipfile.ZipFile(zip_path, "r") as zip_ref:
            zip_ref.extractall(temp_dir)

        extracted_root = os.path.join(temp_dir, f"{repo}-{branch}")

        if not os.path.exists(extracted_root):
            subdirs = [d for d in os.listdir(temp_dir) if os.path.isdir(os.path.join(temp_dir, d))]
            if subdirs:
                extracted_root = os.path.join(temp_dir, subdirs[0])

        final_target_path = os.path.join(extracted_root, sub_path)

        if not os.path.exists(final_target_path):
            print(f"Warning: The subfolder '{sub_path}' was not found in the repo. Scanning root.")
            return extracted_root

        return final_target_path

    except Exception as e:
        shutil.rmtree(temp_dir)
        raise RuntimeError(f"Failed to process GitHub URL: {e}")


def main():
    """
    Entry point for the command line interface.
    """
    parser = argparse.ArgumentParser(description="Parse Dynawo XMLs for unitDynamicModel data.")

    # Arguments
    parser.add_argument(
        "path", nargs="?", help="The local directory path containing the XML files."
    )
    parser.add_argument("--url", help="URL to a ZIP file containing the XML files to process.")

    parser.add_argument(
        "--output", default=".", help="The output directory path (default: current directory)."
    )

    args = parser.parse_args()

    # Validation: Must provide either path or url
    if not args.path and not args.url:
        parser.error("You must provide either a local path or a --url argument.")

    target_path = args.path
    is_temp_dir = False

    try:
        # If URL is provided, download and override target_path
        if args.url:
            is_temp_dir = True
            if "github.com" in args.url and "archive" not in args.url and ".zip" not in args.url:
                target_path = download_github_repository(args.url)
            else:
                target_path = download_and_extract_zip(args.url)

        if target_path and not os.path.exists(target_path):
            print(f"Creating output directory (target_path): {target_path}")
            os.makedirs(target_path, exist_ok=True)

        # Process the directory
        if target_path and os.path.exists(target_path):
            parse_dynawo_xmls(target_path, args.output)
        else:
            print(f"Error: The path '{target_path}' does not exist.")

    finally:
        # Cleanup: Remove temporary directory if one was created
        if is_temp_dir and target_path and os.path.exists(target_path):
            print("Cleaning up temporary files...")
            try:
                shutil.rmtree(target_path)
            except Exception:
                pass


if __name__ == "__main__":
    main()
