#ifndef KERNEL_LOG_SOURCE_HPP
#define KERNEL_LOG_SOURCE_HPP

#include <string>

class KernelLogSource
{
public:
    virtual ~KernelLogSource() = default;

    virtual std::string collect() const = 0;
};

#endif
