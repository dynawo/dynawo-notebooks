model SimpleGenerator
      Real power_output(start=1.0);
    equation
      der(power_output) = -power_output;
    end SimpleGenerator;
    