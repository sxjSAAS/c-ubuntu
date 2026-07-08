#include <iostream>
#include "log.h"
void log(const char* message) 
{
    std::cout << message << std::endl;
}

int main() 
{
    
    log("Hello, World!");
    std::cin.get();


}