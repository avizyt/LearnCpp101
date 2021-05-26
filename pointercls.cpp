#include <iostream>

int main()
{
    int p1 = 23;
    int* pointerOfp1 = &p1;

    std::cout<<"The value of p1 is: "<< p1<<"\n";
    std::cout<<"The address of p1 is: "<< &p1 <<"\n";
    std::cout<<"The value of the pointerOfp1 is: "<<pointerOfp1<<"\n";
    std::cout<<"The value of the p1 from pointer is: "<< *pointerOfp1<<"\n";
}
