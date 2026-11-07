 #include "kernel/CrashLogCollector.hpp"

#include <fstream>
#include <sstream>
#include <stdexcept>

std::string CrashLogCollector::collect(const std::string& filePath)
{
    std::ifstream file(filePath);

    if (!file.is_open())
    {
        throw std::runtime_error("Failed to open crash log: " + filePath);
    }

    std::ostringstream buffer;
    buffer << file.rdbuf();

    return buffer.str();
}
