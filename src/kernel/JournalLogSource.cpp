#include "kernel/JournalLogSource.hpp"

#include <array>
#include <cstdio>
#include <stdexcept>

std::string JournalLogSource::collect() const
{
    FILE* pipe = popen(
        "journalctl -k -b -1 --no-pager",
        "r");

    if (pipe == nullptr)
    {
        throw std::runtime_error("Failed to execute journalctl");
    }

    std::array<char, 4096> buffer{};
    std::string output;

    while (fgets(buffer.data(), buffer.size(), pipe) != nullptr)
    {
        output += buffer.data();
    }

    int status = pclose(pipe);

    if (status == -1)
    {
        throw std::runtime_error("Failed to close journalctl process");
    }

    if (status != 0)
    {
        throw std::runtime_error("journalctl returned an error");
    }

    return output;
}
