// Given an array of positive and negetive integer s, find a contiguour subarray\
// whose sum(sum of elements) is maximized.
#include <iostream>
#include <vector>

int maxSubArraySum(std::vector<int> &a)
{
    int size = a.size();
    int maxSoFar = 0, maxEndingHere = 0;

    for (int i = 0; i < size; ++i) 
    {
        maxEndingHere = maxEndingHere + a[i];
        if(maxEndingHere < 0)
            maxEndingHere =0;
        if(maxSoFar < maxEndingHere)
            maxSoFar = maxEndingHere;
        
    }
    return maxSoFar;
}

int main()
{
    std::vector<int> arr = {1,-2,3,4,-4,6,-14,8,2};
    std::cout << "Max sub array sum: "<< maxSubArraySum(arr);
}
