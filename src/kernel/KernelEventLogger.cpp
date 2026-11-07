#include "kernel/KernelEventLogger.hpp"

#include <iostream>

void KernelEventLogger::log(
    LogLevel level,
    const std::string& message)
{
    std::string levelText;

    switch (level)
    {
        case LogLevel::INFO:
            levelText = "INFO";
            break;

        case LogLevel::WARNING:
            levelText = "WARNING";
            break;

        case LogLevel::ERROR:
            levelText = "ERROR";
            break;

        case LogLevel::CRITICAL:
            levelText = "CRITICAL";
            break;
    }

    std::cout << "[" << levelText << "] "
              << message << '\n';
}
