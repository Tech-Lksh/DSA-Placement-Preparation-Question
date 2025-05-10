#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to sort the array using selection sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Min Kth element :- " << arr[0] << endl;
    cout << "Max Kth element :- " << arr[n - 1] << endl;
}

int main()
{
    int arr[] = {7, 9, 2, 4, 11, 23, 1};
    int n = 7;

    cout << "Current Array :- ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Sort Array :-  ";

    selectionSort(arr, n);
}