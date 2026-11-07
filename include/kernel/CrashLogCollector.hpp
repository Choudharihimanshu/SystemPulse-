#ifndef CRASH_LOG_COLLECTOR_HPP
#define CRASH_LOG_COLLECTOR_HPP

#include <string>

class CrashLogCollector
{
public:
    std::string collect(const std::string& filePath);
};

#endif
