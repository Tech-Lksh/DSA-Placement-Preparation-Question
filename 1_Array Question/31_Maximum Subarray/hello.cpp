#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <math.h>
using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};

//     int size = 5;

//     for(int st=0; st<size; st++) {
//         for(int end=st; end<size; end++) {
//             for(int i=st; i<=end; i++) {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main () {
//     int arr[] = {3, -4, 5, 4, -1, 7, -8};
//     int n = 7;
//     int maxSum = INT_MIN;
//     for(int st=0; st<n; st++) {
//         int curSum = 0;
//         for(int ed=st; ed<n; ed++) {
//             curSum += arr[ed];
//             maxSum = max(curSum, maxSum);
//         }
//     }
//     cout << maxSum << endl;
// }

int main()
{
    int arr[] = {-3, -4, -5, -4, -1, -7, -8};
    int n = 7;

    int curSum = 0, maxSum = INT_MIN;
    for (int st : arr)
    {
        curSum += st;
        maxSum = max(curSum, maxSum);

        if(curSum < 0) {
            curSum = 0;
        }
    }
    cout << maxSum << endl;
}