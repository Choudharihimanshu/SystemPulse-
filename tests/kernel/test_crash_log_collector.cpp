#include "kernel/CrashLogCollector.hpp"

#include <iostream>
#include <stdexcept>

int main()
{
    CrashLogCollector collector;

    try
    {
        std::string log = collector.collect(
            "test_data/panic_logs/sample_panic.log");

        std::cout << log << '\n';
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
