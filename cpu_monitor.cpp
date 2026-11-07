#include <fstream>
#include <iostream>
#include <string>

int main(){
    std::ifstream file("/proc/stat");
    if(!file.is_open()){
        std::cerr << "Error: Cound not open /proc/stat \n";
        return 1;
    }
    std::string line;
    std::getline(file,line);

    std::cout<< line << '\n' ;
    return 0;
}