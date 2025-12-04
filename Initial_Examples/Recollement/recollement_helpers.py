from lxml import etree
from helpers import loadXml


def correctVoltageRegulatorOn(filename):
    (
        iidm,
        iidm_root,
        iidm_namespace,
        iidm_prefix_root,
        iidm_namespace_uri,
        iidm_prefix_root_string,
    ) = loadXml(filename)
    for shunt in iidm.xpath("//*[local-name() = 'shunt']"):
        if "voltageRegulatorOn" not in shunt.attrib:
            shunt.attrib["voltageRegulatorOn"] = "false"

    with open(filename, "wb") as doc:
        doc.write(
            etree.tostring(
                iidm_root,
                pretty_print=True,
                xml_declaration=True,
                encoding="ISO-8859-1",
                standalone=False,
            )
        )


def parameterValues(par_path, dyd_path):
    (
        par,
        par_root,
        par_namespace,
        par_prefix_root,
        par_namespace_uri,
        par_prefix_root_string,
    ) = loadXml(par_path)
    (
        dyd,
        dyd_root,
        dyd_namespace,
        dyd_prefix_root,
        dyd_namespace_uri,
        dyd_prefix_root_string,
    ) = loadXml(dyd_path)
    parameters = {}
    for element in par_root:
        if not isinstance(element, etree._Comment):
            if "set" in element.tag:
                setId = element.attrib["id"]
                blackBox = dyd.xpath(
                    "//*[local-name() = 'blackBoxModel'][@parId = '" + setId + "']"
                )
                if blackBox:
                    if "staticId" in blackBox[0].attrib:
                        staticId = blackBox[0].attrib["staticId"]
                        setId = staticId
                parameters[setId] = {}
                for children in element.getchildren():
                    if not isinstance(children, etree._Comment):
                        if "par" in children.tag:
                            parName = children.attrib["name"]
                            parameters[setId][parName] = children.attrib["value"]

    return parameters


def updateGeneratorsRatedS(par_path, dyd_path, network):
    parameters = parameterValues(par_path, dyd_path)
    generators = network.get_generators(all_attributes=True)
    for generatorId, generatorProperties in generators.iterrows():
        if generatorId in parameters:
            if "generator_SNom" in parameters[generatorId]:
                sNom = parameters[generatorId]["generator_SNom"]
                network.update_generators(id=generatorId, rated_s=float(sNom))
