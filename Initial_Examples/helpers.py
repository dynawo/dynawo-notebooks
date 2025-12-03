import os, sys
from lxml import etree
import matplotlib.pyplot as plt
import pandas as pd
import yaml
import math
import copy

def plot(df):
    df.plot(xlabel='Time').xaxis.set_major_formatter(lambda x, pos: '{:.0f} s'.format(x/1000))

def plotShow(df):
    df.plot(xlabel='Time').xaxis.set_major_formatter(lambda x, pos: '{:.0f} s'.format(x/1000))
    plt.show()

def addPlot(df, curveName = None, label = None):
    if curveName is not None and label is not None:
        figure = df.plot(xlabel='Time', label=label, y=curveName)
    else:
        figure = df.plot(xlabel='Time')
    figure.xaxis.set_major_formatter(lambda x, pos: '{:.0f} s'.format(x / 1000))
    return figure

def plotSameGraph(df, figure, curveName = None, label = None):
    if curveName is not None and label is not None:
        df.plot(xlabel='Time', ax=figure, label=label, y=curveName)
    else:
        df.plot(xlabel='Time', ax=figure)
    plt.legend()
    plt.show()

def plotSameGraphDifferentScale(df, ax1):
    ax2 = ax1.twinx()
    df.plot(ax=ax2, color='tab:red')
    line1 = ax1.get_lines()
    line2 = ax2.get_lines()
    lines = line1 + line2
    labels = [line.get_label() for line in lines]
    ax1.legend(lines, labels, loc='upper right')
    ax2.legend(labels).set_visible(False)
    plt.show()

def loadXml(filename):
    if not os.path.exists(filename):
        print(filename + ' does not exist.')
        sys.exit(1)
    parser = etree.XMLParser(remove_blank_text=True)
    xml = etree.parse(filename, parser)
    xml_root = xml.getroot()
    xml_namespace = xml_root.nsmap
    xml_prefix_root = xml_root.prefix
    xml_namespace_uri = xml_namespace[xml_prefix_root]
    xml_prefix_root_string = '{' + str(xml_namespace_uri) + '}' if xml_prefix_root in xml_namespace else ''

    return xml, xml_root, xml_namespace, xml_prefix_root, xml_namespace_uri, xml_prefix_root_string

def fixIIDMSourceFormat(filename):
    iidm = etree.parse(filename)
    iidm_root = iidm.getroot()
    iidm_root.attrib['sourceFormat'] = "test"

    with open(filename, 'wb') as doc:
        doc.write(etree.tostring(iidm_root, with_comments=True, pretty_print=True, xml_declaration=True, encoding='UTF-8'))

def updateParValue(parfilePath, blackBoxId, parameterName, parameterValue):
    par, par_root, par_namespace, par_prefix_root, par_namespace_uri, par_prefix_root_string = loadXml(parfilePath)
    parSet = par_root.xpath("//*[local-name() = 'set'][@id='" + blackBoxId + "']")[0]
    parameter = parSet.xpath("//*[local-name() = 'par'][@name='" + parameterName + "']")[0]
    parameter.attrib['value'] = parameterValue

    with open(parfilePath, 'wb') as doc:
        doc.write(etree.tostring(par_root, with_comments=True, pretty_print=True, xml_declaration=True, encoding='UTF-8'))

def printParameterValue(parfilePath, blackBoxId, parameterName):
    par, par_root, par_namespace, par_prefix_root, par_namespace_uri, par_prefix_root_string = loadXml(parfilePath)
    parSet = par_root.xpath("//*[local-name() = 'set'][@id='" + blackBoxId + "']")[0]
    parameter = parSet.xpath("//*[local-name() = 'par'][@name='" + parameterName + "']")[0]
    print(parameter.attrib['value'])

def getDynawoHome():
    with open(os.getenv('HOME') + '/.itools/config.yml', 'r') as file:
        itools_config = yaml.safe_load(file)

    if itools_config is not None:
        dynawo_home = itools_config['dynawo']['homeDir']
        if not os.path.exists(dynawo_home):
            sys.exit("The dynawo home directory does not exist.")
    else:
        sys.exit('No ' + os.getenv('HOME') + '/.itools/config.yml file found.')
        
    return dynawo_home

def defineParameters(modelName):
    dynawo_ddb = getDynawoHome() + '/ddb'
    if not modelName.endswith('.desc.xml'):
        modelName = modelName + '.desc.xml'
    desc_xml, desc_xml_root, desc_xml_namespace, desc_xml_prefix_root, desc_xml_namespace_uri, desc_xml_prefix_root_string = loadXml(dynawo_ddb + '/' + modelName)

    parameters = set()
    for parameter in desc_xml_root.findall('.//' + desc_xml_prefix_root_string + 'parameter'):
        if parameter.attrib['readOnly'] == 'false' and 'defaultValue' not in parameter.attrib:
            par_name = parameter.attrib['name']
            parameters.add(par_name)

    return parameters

def defineVariables(modelName):
    dynawo_ddb = getDynawoHome() + '/ddb'
    if not modelName.endswith('.desc.xml'):
        modelName = modelName + '.desc.xml'
    desc_xml, desc_xml_root, desc_xml_namespace, desc_xml_prefix_root, desc_xml_namespace_uri, desc_xml_prefix_root_string = loadXml(dynawo_ddb + '/' + modelName)

    variables = set()
    for variable in desc_xml_root.findall('.//' + desc_xml_prefix_root_string + 'variable'):
        variable_name = variable.attrib['name']
        variables.add(variable_name)

    return variables

def prettyPrint(modelName, set_obj, str_type):
    print(modelName + ' ' + str_type + ':')
    for obj in sorted(set_obj):
        print('  ' + obj)

def prettyPrintParameters(modelName, parameters):
    prettyPrint(modelName, parameters, 'parameters')

def prettyPrintVariables(modelName, parameters):
    prettyPrint(modelName, parameters, 'variables')
        
def add_tap_changer_blocking(model_mapping, dynamic_model_id, tfo_ids, measurement_id, parameter_set_id = None):
    if parameter_set_id is None:
        parameter_set_id = dynamic_model_id
    tcb_df = pd.DataFrame.from_records(
        index='dynamic_model_id',
        columns=['dynamic_model_id', 'parameter_set_id'],
        data=[(dynamic_model_id, parameter_set_id)])
    tfo_df = pd.DataFrame.from_records(
        index='dynamic_model_id',
        columns=['dynamic_model_id', 'transformer_id'],
        data={'dynamic_model_id': [dynamic_model_id for tfo in tfo_ids],
              'transformer_id': tfo_ids})
    measurement1_df = pd.DataFrame.from_records(
        index='dynamic_model_id',
        columns=['dynamic_model_id', 'measurement_point_id'],
        data=[(dynamic_model_id, measurement_id)])
    model_mapping.add_tap_changer_blocking_automation_system(df=tcb_df, tfo_df=tfo_df, mp1_df=measurement1_df)

class Parameters:
    def __init__(self):
        par_prefix = None
        par_namespace = 'http://www.rte-france.com/dynawo'
        namespace_map = {par_prefix: par_namespace}

        # transformer_SNom, generator_SnTfo and generator_SNom could be reference from sNom
        # But generator_SNom needs to be a value to compute OmegaRef coefficient
        # And transformer_SNom and generator_SnTfo needs to be equal
        # And generator_SnTfo could be equal to generator_SNom to make things work

        rootName = etree.QName(par_namespace, 'parametersSet')
        root = etree.Element(rootName, nsmap=namespace_map)
        self.xml_root = root
        self.fixed_reference_parameters = {'generator_P0Pu': 'p_pu', 'generator_Q0Pu':
                                           'q_pu', 'generator_U0Pu': 'v_pu',
                                           'generator_UPhase0': 'angle_pu',
                                           'transformer_P10Pu': 'p_pu',
                                           'transformer_Q10Pu': 'q_pu',
                                           'transformer_U10Pu': 'v_pu',
                                           'transformer_U1Phase0': 'angle_pu',
                                           'svarc_Mode0': 'regulatingMode',
                                           'svarc_P0Pu': 'p_pu',
                                           'svarc_Q0Pu': 'q_pu',
                                           'svarc_U0Pu': 'v_pu',
                                           'svarc_UPhase0': 'angle_pu',
                                           'svarc_UNom': 'UNom',
                                           'hvdc_P10Pu': 'p1_pu',
                                           'hvdc_P20Pu': 'p2_pu',
                                           'hvdc_Q10Pu': 'q1_pu',
                                           'hvdc_Q20Pu': 'q2_pu',
                                           'hvdc_U10Pu': 'v1_pu',
                                           'hvdc_U20Pu': 'v2_pu',
                                           'hvdc_UPhase10': 'angle1_pu',
                                           'hvdc_UPhase20': 'angle2_pu',
                                           'hvdc_AcEmulationOn': 'isACEmulationEnabled',
                                           'hvdc_KpEmul': 'droop',
                                           'governor_PMax': 'pMax',
                                           'governor_PMin': 'pMin',
                                           'governor_PNom': 'pMax',
                                           'load_P0Pu': 'p_pu',
                                           'load_Q0Pu': 'q_pu',
                                           'load_U0Pu': 'v_pu',
                                           'load_UPhase0': 'angle_pu',
                                           'generator_PNom': 'pMax',
                                           'generator_PMax': 'pMax',
                                           'generator_PMin': 'pMin',
                                           'SVarC_P0Pu': 'p_pu',
                                           'SVarC_Q0Pu': 'q_pu',
                                           'SVarC_U0Pu': 'v_pu',
                                           'SVarC_UPhase0': 'angle_pu',
                                           'SVarC_Mode0': 'regulatingMode',
                                           #'SVarC_UNom': 'UNom',
                                           }
        self.other_reference_parameters_lv = {'generator_UBaseLV': 'vNom',
                                           'generator_UNomLV': 'vNom',
                                           'generator_UNom': 'vNom',
                                           'generator_UBaseHV': 'vNom',
                                           'generator_UNomHV': 'vNom'}
        self.other_reference_parameters_hv = {'generator_UBaseHV': 'vNom',
                                           'generator_UNomHV': 'vNom'}
        self.parameters_default_values = {'generator_XTfPu': 0,
                                          'generator_RTfPu': 0,
                                          'generator_ExcitationPu': 1,
                                          'generator_UseApproximation': True,
                                          'generator_thetaCheck': False,
                                          'generator_DPu': 0}
        self.parameters_values = {'generator_Tpd0': 6,
                                  'generator_RaPu': 0.0035,
                                  'generator_MdPuEfd': 0.7,
                                  'generator_Tppq0': 0.1,
                                  'generator_XlPu': 0.2,
                                  'generator_mq': 0.073,
                                  'generator_XppqPu': 0.25,
                                  'generator_H': 3,
                                  'generator_nq': 4.2,
                                  'generator_XdPu': 1.66,
                                  'generator_Tppd0': 0.064,
                                  'generator_XpqPu': 0.54,
                                  'generator_XpdPu': 0.4,
                                  'generator_XqPu': 1.34,
                                  'generator_nd': 4.28,
                                  'generator_Tpq0': 1.17,
                                  'generator_XppdPu': 0.25,
                                  'generator_md': 0.073,
                                  'governor_KGover': 20,
                                  'voltageRegulator_EfdMinPu': 0,
                                  'voltageRegulator_EfdMaxPu': 2.5,
                                  'voltageRegulator_Gain': 30,
                                  'voltageRegulator_LagEfdMax': 4,
                                  'voltageRegulator_LagEfdMin': 10,
                                  'voltageRegulator_UsRefMaxPu': 1.08,
                                  'voltageRegulator_UsRefMinPu': 0.9,
                                  'voltageRegulator_tIntegral': 5,
                                  'transformer_BPu': 0,
                                  'transformer_GPu': 0,
                                  'transformer_RPu': 0,
                                  'transformer_XPu': 0,
                                  'transformer_rTfoPu': 1,
                                  'transformer_ZShortCircuit': 10,
                                  'transformer_copperLosses': 0.2,
                                  'transformer_iMagnetizing': 0.08,
                                  'load_alpha': 1,
                                  'load_beta': 2,
                                  'generator_AlphaPuPNom': 20,
                                  'SVarC_BMaxPu': 1.07,
                                  'SVarC_BMinPu': -0.83,
                                  'SVarC_BShuntPu': 0.1,
                                  'SVarC_IMaxPu': 29,
                                  'SVarC_IMinPu': -29,
                                  'SVarC_KCurrentLimiter': 6.0,
                                  'SVarC_Kp': 2.7,
                                  'SVarC_Lambda': 0.016,
                                  'SVarC_SNom': 215,
                                  'SVarC_Ti': 0.002,
                                  'SVarC_UBlock': 72,
                                  'SVarC_UNom': 225,
                                  'SVarC_URefDown': 235,
                                  'SVarC_URefUp': 242,
                                  'SVarC_UThresholdDown': 230,
                                  'SVarC_UThresholdUp': 245,
                                  'SVarC_UUnblockDown': 160,
                                  'SVarC_UUnblockUp': 3050,
                                  'SVarC_tThresholdDown': 0,
                                  'SVarC_tThresholdUp': 34.3,
                                  'UNom': 225,
                                  'underVoltageAutomaton_tLagAction': 0,
                                  'underVoltageAutomaton_UMinPu': 0,
                                  'auxHV_alpha': 1.5,
                                  'auxHV_beta': 2.5,
                                  'auxLV_alpha': 1.5,
                                  'auxLV_beta': 2.5
                                  }
        self.regulation_values = {'GovCt2': {
                                    'governor_PGenBaseMw': 100,
                                    'governor_RSelectInt': 1,
                                    'governor_aSetPu': 10,
                                    'governor_DeltaOmegaDbPu': 0,
                                    'governor_DeltaOmegaMaxPu': 1,
                                    'governor_DeltaOmegaMinPu': -1,
                                    'governor_DeltaT': 1,
                                    'governor_Dm': 0,
                                    'governor_fLim10Hz': 0,
                                    'governor_fLim1Hz': 49,
                                    'governor_fLim2Hz': 8,
                                    'governor_fLim3Hz': 7,
                                    'governor_fLim4Hz': 6,
                                    'governor_fLim5Hz': 5,
                                    'governor_fLim6Hz': 4,
                                    'governor_fLim7Hz': 3,
                                    'governor_fLim8Hz': 2,
                                    'governor_fLim9Hz': 1,
                                    'governor_KA': 10,
                                    'governor_KDGov': 0,
                                    'governor_KIGov': 0.45,
                                    'governor_KILoad': 1,
                                    'governor_KIMw': 0,
                                    'governor_KPGov': 4,
                                    'governor_KPLoad': 1,
                                    'governor_KTurb': 1.9168,
                                    'governor_PLdRefPu': 1,
                                    'governor_PLim10Pu': 0.8325,
                                    'governor_PLim1Pu': 0.8325,
                                    'governor_PLim2Pu': 0.8325,
                                    'governor_PLim3Pu': 0.8325,
                                    'governor_PLim4Pu': 0.8325,
                                    'governor_PLim5Pu': 0.8325,
                                    'governor_PLim6Pu': 0.8325,
                                    'governor_PLim7Pu': 0.8325,
                                    'governor_PLim8Pu': 0.8325,
                                    'governor_PLim9Pu': 0.8325,
                                    'governor_PRatePu': 0.017,
                                    'governor_RClosePu': -99,
                                    'governor_RDownPu': -99,
                                    'governor_ROpenPu': 99,
                                    'governor_RDroop': 0.05,
                                    'governor_RUpPu': 99,
                                    'governor_tActuator': 0.4,
                                    'governor_tA': 1,
                                    'governor_tB': 0.1,
                                    'governor_tC': 0,
                                    'governor_tDGov': 1,
                                    'governor_tDRatelim': 0.001,
                                    'governor_tEngine': 0,
                                    'governor_tFLoad': 3,
                                    'governor_tLastValue': 1e-5,
                                    'governor_tPElec': 2.5,
                                    'governor_tSA': 1e-6,
                                    'governor_tSB': 50,
                                    'governor_ValveMaxPu': 1,
                                    'governor_ValveMinPu': 0.175,
                                    'governor_WFnlPu': 0.187,
                                    'governor_WFSpdBool': False,
                                    },
                                  'GovSteam': {
                                      'governor_Db1': 0,
                                      'governor_Db2': 0,
                                      'governor_Eps': 0,
                                      'governor_H0': False,
                                      'governor_K': 25,
                                      'governor_K1': 0.2,
                                      'governor_K2': 0,
                                      'governor_K3': 0.3,
                                      'governor_K4': 0.0,
                                      'governor_K5': 0.5,
                                      'governor_K6': 0,
                                      'governor_K7': 0,
                                      'governor_K8': 0,
                                      'governor_PMaxPu': 1,
                                      'governor_PMinPu': 0,
                                      'governor_Sdb1': True,
                                      'governor_Sdb2': True,
                                      'governor_t1': 0.00001,
                                      'governor_t2': 0.00001,
                                      'governor_t3': 0.1,
                                      'governor_t4': 0.3,
                                      'governor_t5': 5,
                                      'governor_t6': 0.5,
                                      'governor_t7': 0.00001,
                                      'governor_Uc': -10,
                                      'governor_Uo': 1,
                                      'governor_ValveOn': True,
                                      'governor_PgvTableName': 'Pgv',
                                      'governor_PgvInvTableName': 'PgvInv',
                                      'governor_TablesFile': ''
                                  },
                                  'GovHydro4': {
                                      'governor_ATurb': 1.2,
                                      'governor_DeltaOmegaDbPu': 0,
                                      'governor_DeltaOmegaEpsPu': 0,
                                      'governor_DeltaPDbPu': 0,
                                      'governor_DTurb': 1.1,
                                      'governor_GMax': 1,
                                      'governor_GMin': 0,
                                      'governor_HDam': 1,
                                      'governor_QNl': 0,
                                      'governor_RPerm': 0.05,
                                      'governor_RTemp': 0.3,
                                      'governor_tG': 0.5,
                                      'governor_tP': 0.1,
                                      'governor_tR': 5,
                                      'governor_tW': 1,
                                      'governor_UC': -0.2,
                                      'governor_UO': 0.2,
                                  },
                                  'St4b': {
                                      'voltageRegulator_Kc': 0.113,
                                      'voltageRegulator_Kg': 0,
                                      'voltageRegulator_Ki': 0,
                                      'voltageRegulator_Kim': 0,
                                      'voltageRegulator_Kir': 10.75,
                                      'voltageRegulator_Kp': 9.3,
                                      'voltageRegulator_Kpm': 1,
                                      'voltageRegulator_Kpr': 10.75,
                                      'voltageRegulator_tA': 0.02,
                                      'voltageRegulator_Thetap': 0,
                                      'voltageRegulator_tR': 0.02,
                                      'voltageRegulator_UOel0Pu': 10,
                                      'voltageRegulator_UUel0Pu': 0,
                                      'voltageRegulator_VaMaxPu': 1,
                                      'voltageRegulator_VaMinPu': -0.87,
                                      'voltageRegulator_VbMaxPu': 11.63,
                                      'voltageRegulator_VmMaxPu': 99,
                                      'voltageRegulator_VmMinPu': -99,
                                      'voltageRegulator_VrMaxPu': 1,
                                      'voltageRegulator_VrMinPu': -0.87,
                                      'voltageRegulator_XlPu': 0.124
                                  },
                                  'TGov3': {
                                    'governor_K': 16.2,
                                    'governor_K1': 0.27,
                                    'governor_K2': 0.292,
                                    'governor_K3': 0.438,
                                    'governor_PMaxPu': 0.82,
                                    'governor_PMinPu': 0.3,
                                    'governor_PrMaxPu': 1.1,
                                    'governor_t1': 1,
                                    'governor_t2': 1,
                                    'governor_t3': 0.49,
                                    'governor_t4': 0.25,
                                    'governor_t5': 7,
                                    'governor_t6': 0.4,
                                    'governor_tA': 1,
                                    'governor_tB': 2,
                                    'governor_tC': 3,
                                    'governor_Uc': -0.081,
                                    'governor_Uo': 0.081,
                                    'governor_FValveInvTableName': 'FValveInv',
                                    'governor_FValveTableName': 'FValve',
                                    'governor_TablesFile': ''
                                  },
                                  'IEEX2A': {
                                      'voltageRegulator_AEx': 0.00021,
                                      'voltageRegulator_BEx': 1.86416,
                                      'voltageRegulator_Ka': 400,
                                      'voltageRegulator_Ke': 1,
                                      'voltageRegulator_Kf': 0.25,
                                      'voltageRegulator_tA': 0.03,
                                      'voltageRegulator_tB': 1e-5,
                                      'voltageRegulator_tC': 1e-5,
                                      'voltageRegulator_tE': 0.8,
                                      'voltageRegulator_tF1': 1.25,
                                      'voltageRegulator_tF2': 1e-5,
                                      'voltageRegulator_tR': 1e-5,
                                      'voltageRegulator_VrMaxPu': 5.974,
                                      'voltageRegulator_VrMinPu': -5.974,
                                  },
                                  'HyGov': {
                                      'governor_At': 1.2,
                                      'governor_DTurb': 0,
                                      'governor_FlowNoLoad': 0.08,
                                      'governor_KDroopPerm': 0.05,
                                      'governor_KDroopTemp': 0.5,
                                      'governor_OpeningGateMax': 1,
                                      'governor_OpeningGateMin': 0,
                                      'governor_tF': 0.05,
                                      'governor_tG': 0.5,
                                      'governor_tR': 4,
                                      'governor_tW': 1.3,
                                      'governor_VelMaxPu': 0.2,
                                  },
                                  'Scrx': {
                                      'voltageRegulator_K': 100,
                                      'voltageRegulator_tA': 1,
                                      'voltageRegulator_tB': 10,
                                      'voltageRegulator_tE': 0.05,
                                      'voltageRegulator_VrMaxPu': 2.5,
                                      'voltageRegulator_VrMinPu': 0,
                                  }
                                }
        self.other_parameters_values = {'generator_UNomLV': 20,
                                        'generator_UNom': 20,
                                        'generator_UBaseLV': 20,
                                        'transformer_UNomLV': 20,
                                        'transformer_UBaseLV': 20
                                        }

    def write(self, path):
        with open(path, 'wb') as doc:
            doc.write(etree.tostring(self.xml_root, pretty_print=True, xml_declaration=True, encoding='UTF-8'))

    def _defineParameters(self, modelName):
        dynawo_ddb = getDynawoHome() + '/ddb'
        if not modelName.endswith('.desc.xml'):
            modelName = modelName + '.desc.xml'
        desc_xml, desc_xml_root, desc_xml_namespace, desc_xml_prefix_root, desc_xml_namespace_uri, desc_xml_prefix_root_string = loadXml(dynawo_ddb + '/' + modelName)

        parameters_type = {}
        for parameter in desc_xml_root.findall('.//' + desc_xml_prefix_root_string + 'parameter'):
            if parameter.attrib['readOnly'] == 'false' and 'defaultValue' not in parameter.attrib:
                par_name = parameter.attrib['name']
                parameters_type[par_name] = parameter.attrib['valueType']

        return parameters_type

    def addParametersSet(self, equipment_properties, voltage_level_properties, set_id, model_name):
        parameters_type = self._defineParameters(model_name)
        par_namespace = self.xml_root.nsmap
        par_prefix_root = self.xml_root.prefix
        par_namespace_uri = par_namespace[par_prefix_root]

        if self.xml_root.xpath("//*[local-name() = 'set'][@id = '" + set_id + "']"):
            return

        nominal_v = voltage_level_properties['nominal_v']

        withTfo = True if 'Tfo' in model_name else False

        set_attrib = {'id': set_id}
        setElement = etree.SubElement(self.xml_root, etree.QName(par_namespace_uri, 'set'), set_attrib)
        for parameterName, parameterType in parameters_type.items():
            reference_parameters = copy.deepcopy(self.fixed_reference_parameters)
            if nominal_v < 30:
                reference_parameters.update(self.other_reference_parameters_lv)
            else:
                reference_parameters.update(self.other_reference_parameters_hv)
            if parameterName in reference_parameters:
                parameter_attrib = {'type': parameterType, 'name': parameterName, 'origData': 'IIDM', 'origName': reference_parameters[parameterName]}
                etree.SubElement(setElement, etree.QName(par_namespace_uri, 'reference'), parameter_attrib)
            else:
                parameter_attrib = {'type': parameterType, 'name': parameterName, 'value': ''}
                if parameterName in self.parameters_default_values:
                    property_value = self.parameters_default_values[parameterName]
                    parameter_attrib['value'] = str(property_value).lower()
                elif parameterName in self.parameters_values:
                    parameter_attrib['value'] = str(self.parameters_values[parameterName])

                for regulName in self.regulation_values.keys():
                    if regulName in model_name:
                        if parameterName in self.regulation_values[regulName]:
                            if "TablesFile" in parameterName:
                                parameter_attrib['value'] = str(os.path.join(os.path.dirname(os.path.abspath(__file__)), "DynaSwing", regulName + ".txt"))
                            else:
                                parameter_attrib['value'] = str(self.regulation_values[regulName][parameterName]).lower() if isinstance(self.regulation_values[regulName][parameterName], bool)  else str(self.regulation_values[regulName][parameterName])

                if parameterName == 'generator_PNomAlt':
                    if equipment_properties['rated_s'] < equipment_properties['max_p']:
                        parameter_attrib['value'] = str(0.9 * equipment_properties['rated_s'])
                    else:
                        parameter_attrib['value'] = str(0.9 * equipment_properties['max_p'])
                elif parameterName == 'generator_PNomTurb':
                    if equipment_properties['rated_s'] < equipment_properties['max_p']:
                        parameter_attrib['value'] = str(0.8 * equipment_properties['rated_s'])
                    else:
                        parameter_attrib['value'] = str(0.8 * equipment_properties['max_p'])
                elif parameterName == 'governor_PBaseMw':
                    if equipment_properties['rated_s'] < equipment_properties['max_p']:
                        parameter_attrib['value'] = str(0.8 * equipment_properties['rated_s'])
                    else:
                        parameter_attrib['value'] = str(0.8 * equipment_properties['max_p'])
                elif parameterName == 'generator_SNom' or parameterName == 'generator_SnTfo' or parameterName == 'transformer_SNom':
                    if math.isnan(equipment_properties['rated_s']):
                        parameter_attrib['value'] = str(1.1 * equipment_properties['max_p'])
                    else:
                        parameter_attrib['value'] = str(equipment_properties['rated_s'])

                if nominal_v > 30:
                    if parameterName in self.other_parameters_values:
                        parameter_attrib['value'] = str(self.other_parameters_values[parameterName])

                    if parameterName == 'generator_UBaseHV' or parameterName == 'generator_UNomHV' or parameterName == 'transformer_UBaseHV' or parameterName == 'transformer_UNomHV':
                        parameter_attrib['value'] = str(nominal_v)
                    if withTfo:
                        if parameterName == 'auxHV_P0Pu':
                            parameter_attrib['value'] = str(0.005 * equipment_properties['max_p'] / 100)
                        elif parameterName == 'auxHV_Q0Pu':
                            parameter_attrib['value'] = str(0.005 * equipment_properties['max_q_at_p'] / 100)
                        elif parameterName == 'auxLV_P0Pu':
                            parameter_attrib['value'] = str(0.005 * equipment_properties['max_p'] / 100)
                        elif parameterName == 'auxLV_Q0Pu':
                            parameter_attrib['value'] = str(0.005 * equipment_properties['max_q_at_p'] / 100)
                    else:
                        if parameterName == 'generator_XTfPu':
                            parameter_attrib['value'] = str(0.01)

                etree.SubElement(setElement, etree.QName(par_namespace_uri, 'par'), parameter_attrib)
