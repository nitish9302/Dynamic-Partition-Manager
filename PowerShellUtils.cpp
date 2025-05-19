#include "PowerShellUtils.h"
#include <cstdlib>
#include <iostream>

void runPowerShellCommand(const std::string& command) {
    // Run powershell command and capture output by redirecting to temp file
    std::string fullCommand = "powershell -Command \"" + command + "\"";
    std::cout << "\n[Executing PowerShell Command]: " << fullCommand << "\n\n";

    int result = system(fullCommand.c_str());
    if (result != 0) {
        std::cerr << "PowerShell command failed with code: " << result << "\n";
    }
}
