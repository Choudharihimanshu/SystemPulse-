#ifndef KERNEL_EVENT_LOGGER_HPP
#define KERNEL_EVENT_LOGGER_HPP

#include <string>
#include "kernel/LogLevel.hpp"

class KernelEventLogger
{
public:
    void log(LogLevel level, const std::string& message);
};

#endif

