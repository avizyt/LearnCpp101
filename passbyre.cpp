#include <cstdio>
#include <iostream>

void incrementPassByRef(int& var)
{
    var++;
}

int main()
{
    int i = 10;
    std::cout << "Value of i before increment is: " << i << std::endl;
    incrementPassByRef(i);
    std::cout << "Value of i after increment is: " << i << std::endl;
}
