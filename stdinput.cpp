#include <iostream>
#include <string>

int main()
{
    std::string fullname;
    std::cout << "Please enetr your name here: ";
    std::getline(std::cin, fullname);
    std::cout << "Your name is: " << fullname;

}