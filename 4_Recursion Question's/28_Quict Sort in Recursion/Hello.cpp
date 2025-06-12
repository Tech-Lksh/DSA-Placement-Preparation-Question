// Quick Sort in Recursion
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

void quickSort(int arr[], int size, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int i = s - 1;
    int j = s;
    int pivot = e;

    while (j < pivot)
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);
    quickSort(arr, size, s, i-1);
    quickSort(arr, size, i+1, e);
}

int main()
{
    int arr[] = {10, 1, 7, 6, 14, 9};
    int size = 6;
    int s = 0;
    int e = size - 1;

    quickSort(arr, size, s, e);

    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
} 