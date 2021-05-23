#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) 
    {
        sum += numbers[i];
        
    }
    std::cout << "Sum is:: "<<sum<<"\n";
    return 0;
} 
