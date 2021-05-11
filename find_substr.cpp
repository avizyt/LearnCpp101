#include <iostream>
#include <string>

int main()
{
    std::string s = "This is a Hello world.";
    std::string stringtofind = "Hello";
    std::string::size_type found = s.find(stringtofind);
    if (found != std::string::npos)
    {
        std::cout << "Substring found at position: " << found;
    }
    else{
        std::cout << "the substring not found.";
    }
}