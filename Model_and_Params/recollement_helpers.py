def add_parameters(self, blackbox_id, model_name, equipment_properties, voltage_level_properties, computed_values=None):
        parameters_type = self._defineParameters(model_name)
        par_namespace = self.xml_root.nsmap
        par_prefix_root = self.xml_root.prefix
        par_namespace_uri = par_namespace[par_prefix_root]

        if self.xml_root.xpath("//*[local-name() = 'set'][@id = '" + blackbox_id + "']"):
            return

        nominal_v = voltage_level_properties['nominal_v']
        withTfo = True if 'Tfo' in model_name else False

        set_attrib = {'id': blackbox_id}
        setElement = etree.SubElement(self.xml_root, etree.QName(par_namespace_uri, 'set'), set_attrib)
        
        for parameterName, parameterType in parameters_type.items():
            reference_parameters = copy.deepcopy(self.fixed_reference_parameters)
            if nominal_v < 30:
                reference_parameters.update(self.other_reference_parameters_lv)
            else:
                reference_parameters.update(self.other_reference_parameters_hv)
                
            if parameterName in reference_parameters:
                # Reference parameters mapping
                parameter_attrib = {'type': parameterType, 'name': parameterName, 'origData': 'IIDM', 'origName': reference_parameters[parameterName]}
                etree.SubElement(setElement, etree.QName(par_namespace_uri, 'reference'), parameter_attrib)
            else:
                parameter_attrib = {'type': parameterType, 'name': parameterName, 'value': ''}
                
                # Apply pre-computed physical values if provided
                if computed_values:
                    if parameterName == 'generator_PNomAlt' and 'PNom' in computed_values:
                        parameter_attrib['value'] = str(computed_values['PNom'])
                    elif parameterName == 'generator_PNomTurb' and 'PBaseMw' in computed_values:
                        parameter_attrib['value'] = str(computed_values['PBaseMw'])
                    elif parameterName == 'governor_PBaseMw' and 'PBaseMw' in computed_values:
                        parameter_attrib['value'] = str(computed_values['PBaseMw'])
                    elif (parameterName in ['generator_SNom', 'generator_SnTfo', 'transformer_SNom']) and 'SNom' in computed_values:
                        parameter_attrib['value'] = str(computed_values['SNom'])
                
                # Fallback to default logic if value is still empty
                if parameter_attrib['value'] == '':
                     if parameterName in self.parameters_default_values:
                        property_value = self.parameters_default_values[parameterName]
                        parameter_attrib['value'] = str(property_value).lower()
                     elif parameterName in self.parameters_values:
                        parameter_attrib['value'] = str(self.parameters_values[parameterName])

                # ... (Existing regulation logic continues here) ...

                etree.SubElement(setElement, etree.QName(par_namespace_uri, 'par'), parameter_attrib)