#ifndef JOURNAL_LOG_SOURCE_HPP
#define JOURNAL_LOG_SOURCE_HPP

#include "kernel/KernelLogSource.hpp"

class JournalLogSource : public KernelLogSource
{
public:
    std::string collect() const override;
};

#endif
