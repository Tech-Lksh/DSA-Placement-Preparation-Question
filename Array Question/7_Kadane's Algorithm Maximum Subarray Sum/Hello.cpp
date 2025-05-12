#include <iostream>
#include <vector>
using namespace std;

// 1_ Maximum Subarray Sum (Brute Force)

// int subArrayMaxSum (int arr[], int size) {
//     int max_sum = INT16_MIN;

//     for(int st=0; st<size; st++) {
//         int currSum = 0;
//         for(int ed=st; ed<size; ed++) {
//             currSum += arr[ed];
//             max_sum = max(currSum, max_sum);
//         }
//     }

//     cout << "Maximum SubArray Sum  is :- " << max_sum;

//     return 0;
// }

// int main() {
//     int arr[] = {3,-4,5,7,-1,7,-8};
//     int size = 7;

//     subArrayMaxSum(arr, size);
// }




// 2_ Kadane's Algorithm Maximum Subarray Sum

int maxSubArray(int nums[], int size)
{
    int currSum = 0, maxSum = INT16_MIN;

    for (int val = 0; val < size; val++)
    {
        currSum += nums[val];
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "Maximun SubArray is :- " << maxSum;
    return 0;
}

int main()
{
    int nums[] = {3, -4, 5, 4, -1, 7, -8};
    int size = 7;

    maxSubArray(nums, size);
}