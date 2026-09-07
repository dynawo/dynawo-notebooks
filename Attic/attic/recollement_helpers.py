from lxml import etree
import copy
import os


def fix_voltage_regulator_on(iidm_file):
    """
    Parses the IIDM XML file and enforces 'voltageRegulatorOn="true"'
    for all generators.
    """
    if not os.path.exists(iidm_file):
        return

    try:
        parser = etree.XMLParser(remove_blank_text=True)
        tree = etree.parse(iidm_file, parser)
        root = tree.getroot()

        # Handle namespaces generically
        ns = root.nsmap

        # Find all generators
        generators = root.xpath("//*[local-name()='generator']")

        changed = False
        for gen in generators:
            current_val = gen.get("voltageRegulatorOn")
            if current_val != "true":
                gen.set("voltageRegulatorOn", "true")
                changed = True

        if changed:
            tree.write(iidm_file, pretty_print=True, xml_declaration=True, encoding="UTF-8")

    except Exception as e:
        print(f"Warning: Could not fix voltage regulators. Error: {e}")


class Dyd:
    """
    Helper class to handle .dyd files.
    Now remembers the filepath provided at initialization.
    """

    def __init__(self, dyd_path):
        self.output_path = dyd_path  # Store the path for saving later

        # If the file exists, parse it; otherwise create a basic root structure
        if os.path.exists(dyd_path):
            self.tree = etree.parse(dyd_path)
            self.root = self.tree.getroot()
        else:
            self.root = etree.Element(
                "dynamicModelsArchitecture",
                nsmap={None: "http://www.rte-france.com/dynawo"},
            )
            self.tree = etree.ElementTree(self.root)

        self.ns = self.root.nsmap
        if None in self.ns:
            self.ns["dyn"] = self.ns.pop(None)
        elif "dyn" not in self.ns:
            self.ns["dyn"] = "http://www.rte-france.com/dynawo"

    def add_blackbox(self, id, lib, par_id, static_id):
        if self.root.xpath(f"//*[local-name()='blackBoxModel'][@id='{id}']"):
            return

        bb_attribs = {
            "id": id,
            "lib": lib,
            "parFile": f"{par_id}.par",
            "parId": par_id,
            "staticId": static_id,
        }

        container = self.root.find(f".//{{*}}blackBoxModels")
        if container is None:
            ns_uri = self.ns.get("dyn", "http://www.rte-france.com/dynawo")
            container = etree.SubElement(self.root, etree.QName(ns_uri, "blackBoxModels"))

        ns_uri = self.ns.get("dyn", "http://www.rte-france.com/dynawo")
        etree.SubElement(container, etree.QName(ns_uri, "blackBoxModel"), bb_attribs)

    def save(self, output_path=None):
        """
        Saves the file. If output_path is not provided, uses the one from init.
        """
        target = output_path if output_path else self.output_path
        self.tree.write(target, pretty_print=True, xml_declaration=True, encoding="UTF-8")


class Par:
    """
    Helper class to handle .par files.
    Now remembers the filepath provided at initialization.
    """

    def __init__(self, par_path):
        self.output_path = par_path  # Store the path for saving later

        if os.path.exists(par_path):
            self.tree = etree.parse(par_path)
            self.xml_root = self.tree.getroot()
        else:
            self.xml_root = etree.Element(
                "parametersSet", nsmap={None: "http://www.rte-france.com/dynawo"}
            )
            self.tree = etree.ElementTree(self.xml_root)

        self.fixed_reference_parameters = {
            "generator_P0Pu": "p_pu",
            "generator_Q0Pu": "q_pu",
            "infiniteBus_UPu": "Upu",
            "infiniteBus_UPhase": "Theta_pu",
            "infiniteBus_UNom": "UNom",
        }
        self.other_reference_parameters_lv = {}
        self.other_reference_parameters_hv = {}

        self.parameters_default_values = {
            "generator_H": 3.0,
            "generator_D": 0.0,
            "generator_R": 0.0,
            "generator_X": 0.1,
        }
        self.parameters_values = {}

    def _defineParameters(self, model_name):
        common_params = {
            "generator_P0Pu": "DOUBLE",
            "generator_Q0Pu": "DOUBLE",
            "generator_PNomAlt": "DOUBLE",
            "generator_PNomTurb": "DOUBLE",
            "generator_SNom": "DOUBLE",
            "generator_H": "DOUBLE",
            "generator_D": "DOUBLE",
            "generator_RaPu": "DOUBLE",
            "generator_XdPu": "DOUBLE",
            "generator_XqPu": "DOUBLE",
            "infiniteBus_UPu": "DOUBLE",
            "infiniteBus_UPhase": "DOUBLE",
            "infiniteBus_UNom": "DOUBLE",
        }
        return common_params

    def save(self, output_path=None):
        """
        Saves the file. If output_path is not provided, uses the one from init.
        """
        target = output_path if output_path else self.output_path
        self.tree.write(target, pretty_print=True, xml_declaration=True, encoding="UTF-8")

    def add_parameters(
        self,
        blackbox_id,
        model_name,
        equipment_properties,
        voltage_level_properties,
        computed_values=None,
    ):
        parameters_type = self._defineParameters(model_name)

        par_namespace = self.xml_root.nsmap
        par_namespace_uri = par_namespace.get(None) or par_namespace.get(
            list(par_namespace.keys())[0]
        )

        xpath_query = "//*[local-name() = 'set'][@id = '" + blackbox_id + "']"
        if self.xml_root.xpath(xpath_query):
            return

        nominal_v = voltage_level_properties.get("nominal_v", 0.0)

        set_attrib = {"id": blackbox_id}
        setElement = etree.SubElement(
            self.xml_root, etree.QName(par_namespace_uri, "set"), set_attrib
        )

        for parameterName, parameterType in parameters_type.items():
            reference_parameters = copy.deepcopy(self.fixed_reference_parameters)
            if nominal_v < 30:
                reference_parameters.update(self.other_reference_parameters_lv)
            else:
                reference_parameters.update(self.other_reference_parameters_hv)

            if parameterName in reference_parameters:
                parameter_attrib = {
                    "type": parameterType,
                    "name": parameterName,
                    "origData": "IIDM",
                    "origName": reference_parameters[parameterName],
                }
                etree.SubElement(
                    setElement,
                    etree.QName(par_namespace_uri, "reference"),
                    parameter_attrib,
                )
            else:
                parameter_attrib = {
                    "type": parameterType,
                    "name": parameterName,
                    "value": "",
                }

                if computed_values:
                    if parameterName == "generator_PNomAlt" and "PNom" in computed_values:
                        parameter_attrib["value"] = str(computed_values["PNom"])
                    elif parameterName == "generator_PNomTurb" and "PBaseMw" in computed_values:
                        parameter_attrib["value"] = str(computed_values["PBaseMw"])
                    elif parameterName == "governor_PBaseMw" and "PBaseMw" in computed_values:
                        parameter_attrib["value"] = str(computed_values["PBaseMw"])
                    elif (
                        parameterName in ["generator_SNom", "generator_SnTfo", "transformer_SNom"]
                    ) and "SNom" in computed_values:
                        parameter_attrib["value"] = str(computed_values["SNom"])

                if parameter_attrib["value"] == "":
                    if parameterName in self.parameters_default_values:
                        property_value = self.parameters_default_values[parameterName]
                        parameter_attrib["value"] = str(property_value).lower()
                    elif parameterName in self.parameters_values:
                        parameter_attrib["value"] = str(self.parameters_values[parameterName])

                etree.SubElement(
                    setElement, etree.QName(par_namespace_uri, "par"), parameter_attrib
                )
