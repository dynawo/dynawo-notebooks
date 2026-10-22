within Dynawo.Electrical.BESS.WECC;

/*
* Compatibility model for the dynawo-notebooks PyPowSyBl workflow.
*
* The Dynawo library 1.8 replaced BESScbCurrentSource by BESSCurrentSource, which
* exposes separate REEC/REPC limits and time constants, an explicit description of
* the plant transformers and optional remote measurements at the point of common
* coupling (PCC). This model exposes that interface on top of the BESScbCurrentSource
* model of the Dynawo library 1.7, which is also the model compiled in the model
* database of the Dynawo 1.7 simulator (BESScbWeccCurrentSource), so that a case
* written against the newer interface can be compiled, simulated and initialized
* with the Dynawo 1.7 tool chain.
*
* Only the configurations that the 1.7 model can represent exactly are accepted:
*  - the plant controller measures at the model terminal (PPCLocal = true),
*  - the low voltage power logic is disabled (Lvplsw = false),
*  - the plant transformers have no shunt admittance and a unit ratio,
*  - REEC and REPC share the same power limits and active power time constant.
* The assertions below stop the simulation when any of the numerical conditions is
* violated (written with <=, since Dynawo compares reals with a tolerance and would never
* find a value strictly below 1e-12). The two Boolean switches are checked by the toolkit
* when it reads the case (compatibility module): Dynawo stores Boolean parameters as
* +1/-1, and the code it generates for an assertion on a Boolean parameter misreads false.
*
* The series impedance between the injector and the terminal is the sum of the
* converter, group transformer and plant transformer impedances of the 1.8 model,
* converted from base SNom to base SnRef as required by the 1.7 model.
*
* It is only loaded when the class is missing from the loaded library.
*/

model BESSCurrentSource "WECC BESS with the interface of the Dynawo library 1.8, built on top of the BESScbCurrentSource model of the Dynawo library 1.7"
  extends Dynawo.Electrical.BESS.WECC.BESScbCurrentSource(
    final PMaxPu = PMaxREECPu,
    final PMinPu = PMinREECPu,
    final QMaxPu = QMaxREECPu,
    final QMinPu = QMinREECPu,
    final tP = tpREEC,
    final RPu = (RConverterPu + RLvTrPu + RMvHvPu) * SystemBase.SnRef / SNom,
    final XPu = (XConverterPu + XLvTrPu + XMvHvPu) * SystemBase.SnRef / SNom,
    RateFlag = false);

  // REEC and REPC limits and time constants, separate in the 1.8 interface
  parameter Types.ActivePowerPu PMaxREECPu "Active power upper limit in REEC in pu (base SNom)";
  parameter Types.ActivePowerPu PMinREECPu "Active power lower limit in REEC in pu (base SNom)";
  parameter Types.ReactivePowerPu QMaxREECPu "Reactive power upper limit, when VFlag == 1 in REEC in pu (base SNom)";
  parameter Types.ReactivePowerPu QMinREECPu "Reactive power lower limit, when VFlag == 1 in REEC in pu (base SNom)";
  parameter Types.ActivePowerPu PMaxREPCPu = PMaxREECPu "Maximum plant level active power command in REPC in pu (base SNom)";
  parameter Types.ActivePowerPu PMinREPCPu = PMinREECPu "Minimum plant level active power command in REPC in pu (base SNom)";
  parameter Types.ReactivePowerPu QMaxREPCPu = QMaxREECPu "Maximum plant level reactive power command in REPC in pu (base SNom)";
  parameter Types.ReactivePowerPu QMinREPCPu = QMinREECPu "Minimum plant level reactive power command in REPC in pu (base SNom)";
  parameter Types.Time tpREEC "Active power filter time constant in REEC in s";
  parameter Types.Time tpREPC = tpREEC "Active power filter time constant in REPC in s";

  // Low voltage power logic of the 1.8 generator/converter model, not available in the 1.7 model
  parameter Boolean Lvplsw = false "Low voltage power logic switch (only false is supported)";
  parameter Types.PerUnit brkpt = 0.9 "LVPL breakpoint in pu (base UNom) (unused)";
  parameter Types.PerUnit lvpl1 = 1.22 "LVPL gain breakpoint in pu (unused)";
  parameter Types.PerUnit zerox = 0.4 "LVPL zero crossing in pu (base UNom) (unused)";

  // Plant topology of the 1.8 interface
  parameter Boolean ConverterLVControl = true "If true, the converter controls at its output (LV side of its transformer), if false, after its transformer (MV side)";
  parameter Boolean PPCLocal = true "If true, the plant controller controls at the model terminal (only true is supported)";
  parameter Types.PerUnit RLvTrPu = 0 "Serial resistance of the LV transformer in pu (base UNom, SNom)";
  parameter Types.PerUnit XLvTrPu = 0 "Serial reactance of the LV transformer in pu (base UNom, SNom)";
  parameter Types.PerUnit RMvHvPu = 0 "Serial resistance of the internal MV network and MV/HV transformer in pu (base UNom, SNom)";
  parameter Types.PerUnit XMvHvPu = 0 "Serial reactance of the internal MV network and MV/HV transformer in pu (base UNom, SNom)";
  parameter Types.PerUnit BMvHvPu = 0 "Shunt susceptance of the internal MV network and MV/HV transformer in pu (base UNom, SNom) (only 0 is supported)";
  parameter Types.PerUnit GMvHvPu = 0 "Shunt conductance of the internal MV network and MV/HV transformer in pu (base UNom, SNom) (only 0 is supported)";
  parameter Types.PerUnit rTfoPu = 1 "Transformation ratio of the plant transformer in pu (only 1 is supported)";

  // Measurements at a remote point of common coupling, only used by the 1.8 model when PPCLocal = false
  parameter Types.ActivePowerPu PPcc0Pu = 0 "Start value of active power at the PCC in pu (base SnRef) (receptor convention) (unused)";
  parameter Types.ReactivePowerPu QPcc0Pu = 0 "Start value of reactive power at the PCC in pu (base SnRef) (receptor convention) (unused)";
  parameter Types.VoltageModulePu UPcc0Pu = 1 "Start value of voltage magnitude at the PCC in pu (base UNom) (unused)";
  Modelica.Blocks.Interfaces.RealInput PPccPu(start = PPcc0Pu) "Active power at the PCC in pu (base SnRef) (receptor convention) (unused)";
  Modelica.Blocks.Interfaces.RealInput QPccPu(start = QPcc0Pu) "Reactive power at the PCC in pu (base SnRef) (receptor convention) (unused)";
  Modelica.ComplexBlocks.Interfaces.ComplexInput uPccPu(re(start = UPcc0Pu), im(start = 0)) "Complex voltage at the PCC in pu (base UNom) (unused)";

protected
  // Converter source impedance that the 1.8 model inserts when it controls on the LV side
  final parameter Types.PerUnit RConverterPu = if ConverterLVControl then 1e-5 else 0 "Converter source resistance in pu (base UNom, SNom)";
  final parameter Types.PerUnit XConverterPu = if ConverterLVControl then 1e-5 else 0 "Converter source reactance in pu (base UNom, SNom)";

equation
  assert(abs(BMvHvPu) <= 1e-12 and abs(GMvHvPu) <= 1e-12 and abs(rTfoPu - 1) <= 1e-12, "BESSCurrentSource (Dynawo 1.7 compatibility): the plant transformer must have no shunt admittance and a unit ratio");
  assert(abs(PMaxREPCPu - PMaxREECPu) <= 1e-12 and abs(PMinREPCPu - PMinREECPu) <= 1e-12 and abs(QMaxREPCPu - QMaxREECPu) <= 1e-12 and abs(QMinREPCPu - QMinREECPu) <= 1e-12, "BESSCurrentSource (Dynawo 1.7 compatibility): REEC and REPC must share the same power limits");
  assert(abs(tpREPC - tpREEC) <= 1e-12, "BESSCurrentSource (Dynawo 1.7 compatibility): REEC and REPC must share the same active power time constant");

  annotation(preferredView = "text");
end BESSCurrentSource;
