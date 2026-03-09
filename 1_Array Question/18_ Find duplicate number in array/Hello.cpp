// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int findDuplicate(int arr[], int size) {
//     for(int  i =0; i <size; i++) {
//         for(int j=i+1; j <size; j++) {
//             if(arr[i] == arr[j]) {
//             cout << arr[j];
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[] = {2,3,4,5,6,2,3,4,5};
//     int size = 9;

//     findDuplicate(arr, size);
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <math.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;

    
    for (int i =1; i < size; i++)
    {
        if(arr[index] != arr[i]) {
            index = arr[i];
        } else if(arr[index] == arr[i]) {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}