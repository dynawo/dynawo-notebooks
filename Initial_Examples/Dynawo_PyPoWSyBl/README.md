Install:

If you already have `pypowsybl` installed do:
```
$> pip3 uninstall pypowsybl
```

You need to config `~/.pip/pip.conf` with:
```
[global]
index = https://devin-depot.rte-france.com/repository/pypi-all/pypi
index-url = https://devin-depot.rte-france.com/repository/pypi-all/simple
trusted-host = devin-depot.rte-france.com
```

Then install packages:

```
$> pip3 install --user pypowsybl-rte matplotlib jupyter jupyterlab pypowsybl_jupyter pypowsybl-jupyter-rte
```

Create `~/.itools/config.yml` and update `XXX` to your local path:

``` yaml
dynamic-simulation:
 default-impl-name: "Dynawo"

dynamic-simulation-default-parameters:
   startTime: 0
   stopTime: 1200
 
dynawo:
  homeDir: /XXX/dynawo
  debug: true

dynawo-simulation-default-parameters:
    parametersFile: /home/XXX/Projects/dynawo-notebook/SMIB/SMIB.par
    network.parametersFile: /home/XXX/Projects/dynawo-notebook/SMIB/network.par
    network.parametersId: "NETWORK"
    solver.type: IDA
    solver.parametersFile: /home/XXX/Projects/dynawo-notebook/SMIB/solvers.par
    solver.parametersId: "IDA"
    mergeLoads: false
    jobs.dynawoLog: true
```

For Nordic32:
``` yaml
dynawo-simulation-default-parameters:
    parametersFile: /home/XXX/Projects/dynawo-notebook/Nordic32/nordic32.par
    network.parametersFile: /home/XXX/Projects/dynawo-notebook/Nordic32/network.par
    network.parametersId: "NETWORK"
    solver.type: SIM
    solver.parametersFile: /home/XXX/Projects/dynawo-notebook/Nordic32/solvers.par
    solver.parametersId: "SIM"
    mergeLoads: false
    jobs.dynawoLog: true
```

You need to install a dynawo distribution somewhere and do something like this:
```
$> curl -LO https://github.com/dynawo/dynawo/releases/download/v1.6.0/Dynawo_Linux_v1.6.0.zip && unzip Dynawo_Linux_v1.6.0.zip
```

At some point the change of `dynawo-simulation-default-parameters` will be available directly in python but the corresponing pr is not available yet.

- SMIB :
    * Construire un réseau iidm de zéro
    * Créer un mapping simple avec un bus infini
    * Evénement de variation de puissance sur un groupe
    * Changer la valeur d'un paramètre pour faire une étude paramétrique de la réponse
    * Connaitre les paramètres d'un modèle

- SMIB2 :
    * Evénement de court-circuit sur un noeud
    * Etude de l'influence de la modélisation entre GeneratorSynchronousFourWindingsProportionalRegulations et GeneratorSynchronousFourWindingsGoverPropVRPropInt

- IEEE14 :
    * Création d'un mapping plus classique
    * Evenement de deconnection
    * Tracé de plusieurs variables
    * Connaitres les variables disponibles d'un modèle pour les courbes

- Nordic32 :
    * Simulation de type "DynaWaltz" écroulement de tension
    * Ajout d'un automate TapChangerBlocking pour éviter l'écroulement

