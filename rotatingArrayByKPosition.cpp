
#include <iostream>
#include <vector>

void reverseArray(std::vector<int> &a, int start, int end)
{
    for (int i = start,j= end; i < j; i++, j--) {
        int temp =a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

void rotateArray(std::vector<int> &arr, int k)
{
    int n = arr.size();
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);
    reverseArray(arr, 0, n-1);
}

int main()
{
    std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    std::cout <<"Rotated array is: " << rotateArray(arr, 5) << '\n';
    return 0;
}
