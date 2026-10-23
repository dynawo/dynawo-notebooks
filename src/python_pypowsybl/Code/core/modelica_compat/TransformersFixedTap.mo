within Dynawo.Electrical.Transformers;

/*
* Compatibility package for the dynawo-notebooks PyPowSyBl workflow.
*
* The Dynawo library 1.8 moved the fixed-ratio transformer into the
* TransformersFixedTap sub-package. This package exposes that class path on top of
* the Dynawo library 1.7, where the same model lives directly in
* Dynawo.Electrical.Transformers, so that cases written against the newer path can
* be compiled with the library shipped with the Dynawo 1.7 simulator.
*
* It is only loaded when the class path is missing from the loaded library.
*/

package TransformersFixedTap "Fixed-tap transformer class paths of the Dynawo library 1.8, mapped onto the Dynawo library 1.7"
  model TransformerFixedRatio = Dynawo.Electrical.Transformers.TransformerFixedRatio "Two winding transformer with a fixed ratio";

  annotation(preferredView = "text");
end TransformersFixedTap;
