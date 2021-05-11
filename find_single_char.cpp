#include <iostream>
#include <string>

int main()
{
    std::string str1 = "This is a new string.";
    char c = 'n';
    auto charfind = str1.find(c);

    if (charfind != std::string::npos)
    {
        std::cout << "Char found at position:" << charfind <<"\n";
    }
    else
    {
        std::cout << "char not found." << "\n";
    }
}