#ifndef PANIC_ANALYZER_HPP
#define PANIC_ANALYZER_HPP

#include <string>
#include "kernel/CrashReport.hpp"

class PanicAnalyzer
{
public:
    CrashReport analyze(const std::string& log);
};

#endif
