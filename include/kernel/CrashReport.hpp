#ifndef CRASH_REPORT_HPP
#define CRASH_REPORT_HPP

#include <string>

struct CrashReport
{
    bool panicDetected = false;

    std::string panicReason;
    std::string failureType;
    std::string processName;
    std::string faultingFunction;

    int cpuId = -1;
    int processId = -1;
};

#endif
