#include <iostream>
#include <string>




int main () {
    // user's name
    std::string name;

    // read user's name from stdin 
    std::cin >> name;

    // greet world from user
    std::cout << "Hello world from " << name << std::endl;
    return 0; 
}
