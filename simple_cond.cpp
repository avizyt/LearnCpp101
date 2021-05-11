#include <iostream>
int main()
{
bool mycondition = true;
int x = 0;
if (mycondition)
{
x = 1;
}
else
{
x = 0;
}
std::cout << "The value of x is: " << x << '\n';
}