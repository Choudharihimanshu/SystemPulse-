#include "kernel/KernelEventLogger.hpp"

int main()
{
    KernelEventLogger logger;

    logger.log(LogLevel::INFO, "Kernel logs collected");

    logger.log(LogLevel::WARNING, "Kernel OOPS detected");

    logger.log(LogLevel::CRITICAL, "Kernel panic detected");

    logger.log(LogLevel::ERROR, "Failed to read pstore");

    return 0;
}

