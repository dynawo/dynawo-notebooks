# 2. Python Environment Setup for Powsybl & Dynawo

*Based on meeting notes: Ensure compatibility with RTE's infrastructure versions if deploying in their environment (pypowsybl-rte packages).*

## Prerequisites
1.  **Java (JDK 17+):** The backend of Powsybl is Java-based.
    ```bash
    sudo apt install openjdk-17-jdk
    ```
2.  **Dynawo Binaries:** You must have Dynawo installed locally (version >= 1.6.0 recommended for full features).

## Step 1: Virtual Environment
Create an isolated environment to manage dependencies and avoid system conflicts.

```bash
python3 -m venv venv_powsybl
source venv_powsybl/bin/activate
```

## Step 2: Install Python Libraries
Standard installation based on the project proposal:

```bash
pip install pypowsybl pandas lxml pyyaml matplotlib jupyter jupyterlab
```

*Note: If you have access to the internal RTE repository, prioritize `pypowsybl-rte` and `pypowsybl-jupyter-rte` as indicated in the `README.md`.*

## Step 3: Configure the Link to Dynawo
You need to tell PyPowsybl where the C++ engine lives. Create or edit `~/.itools/config.yml`:

```yaml
dynawo:
  # Update this path to your actual dynawo installation
  homeDir: /opt/dynawo
  debug: true
```

## Step 4: Validation
Run a quick Python script to check if Powsybl can see the Dynawo solver.

```python
import pypowsybl.dynawo as dynawo
print("Dynawo module loaded successfully.")
```