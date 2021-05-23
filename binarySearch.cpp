#include <iostream>
#include <vector>

int BinaruSearch(std::vector<int> &arr, int value)
{
    int size = arr.size();
    int mid;
    int low = 0;
    int high = size -1;
    while(low <=high)
    {
        mid = low + (high-low)/2; //to avoide overflow
        if(arr[mid] == value)
        {
            return mid;
        }
        else {
        if(arr[mid] < value)
            low = mid + 1;
        else
         high= mid - 1;
        }
    }
    return -1;
}

int main()
{
    std::vector<int> arr = {12,15,23,45,53,67,89,110,230};
    std::cout << "Searching element is: "<< BinaruSearch(arr,111);
    return 0;
}
