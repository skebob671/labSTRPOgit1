// Program asks user for name and prints greeting
#include <iostream>
#include <string>

int
main()
{
    std::string userName;
    
    std::cout << "Please enter your name: ";
    std::cin >> userName;
    
    std::cout << "Hello world from " << userName 
              << std::endl;
    
    return 0;
}