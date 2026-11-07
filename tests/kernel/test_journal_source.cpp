#include "kernel/JournalLogSource.hpp"

#include <iostream>
#include <stdexcept>

int main()
{
    JournalLogSource source;

    try
    {
        std::string logs = source.collect();

        if (logs.empty())
        {
            std::cout << "No previous boot kernel logs found.\n";
        }
        else
        {
            std::cout << "Journal logs collected successfully.\n";
            std::cout << "Collected bytes: " << logs.size() << '\n';
            std::cout << logs.substr(0, 1000) << '\n';
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
