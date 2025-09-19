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
        //int temp = arr[minIndex];
        //arr[minIndex] = arr[i];
        //arr[i] = temp;
        swap(arr[minIndex].begin(), arr[i].end());
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


// #include<iostream>
// using namespace std;

// int findKthMinMax(int arr[], int size) {
//     int min_Kth = INT16_MAX;

//     for(int i=0; i<size; i++) {
//         if(arr[i] < min_Kth) {
//             min_Kth = arr[i];
//         }
//     }
//      return min_Kth;
// }


// int main() {
//     int arr[] = {7,9,2,4,11,23,1};
//     int size = 7;

//     int minimum = findKthMinMax(arr, size);
//     cout << minimum;
// }
