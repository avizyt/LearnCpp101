#include <cstdio>
#include <iostream>

void incrementPassByPointer(int* ptr)
{
    (*ptr)++;
}

int main()
{
    int i = 10;
    std::cout << "Value of i before increment is: " << i << std::endl;
    incrementPassByPointer(&i);
    std::cout << "Value of i after increment is: " << i << std::endl;
}
