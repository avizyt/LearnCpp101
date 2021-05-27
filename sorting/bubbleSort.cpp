//Bubble sort is the simplest sorting algorithm that works
// repeatedly swapping the adjacent elements if they are 
// in wrong order.
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i<n-1; i++)
        for (j = 0; j<n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);

}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; ++i) 
        cout<<arr[i]<<" ";
    cout <<endl;
    
}

int main()
{
    int arr[] = {567,435,985,4563,2312,345,7684,78546,3452,5647,98893,4536,85647,23445};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
