#include <iostream>

int main(){
    double x = 3.14;
    double &y = x;
    
    y = 5.46;
    std::cout << "The val are: " << x << "and" << y << '\n';

    x = 23.43;
    std::cout << "The val are: " << x << "and" << y << '\n';
}