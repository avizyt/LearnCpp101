#include <iostream>
#include <vector>

int SequnetialSearch(std::vector<char> &arr, char value)
{
    int size = arr.size();
    for (int i=0; i < size;i++)
    {
        if(value == arr[i])
            return i;
    }
    return -1;
}

int main()
{
    std::vector<char> arr = {'a','b','c','d','e'};
    std::cout <<"Searched element is: "<< SequnetialSearch(arr, 'f')<<'\n';
    return 0;
}
