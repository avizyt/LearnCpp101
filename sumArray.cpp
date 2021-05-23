// Write a method that will return the sun of all the elements pf the integer
// array given array and its size as an arguments.

#include <iostream>
#include <vector>

int SumArray(std::vector<int>&arr)
{
    int size = arr.size();
    int total = 0;
    int index = 0;
    for (index = 0; index < size; ++index) {
        
        total = total + arr[index];
    }
    return total;
}

int main()
{
    std::vector<int> arr = {1,2,3,4,5,6,7,8,9};
    std::cout << "Sum of all the values in array: " << SumArray(arr)<<"\n";
    return 0;
}
