#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMissingNumber(const vector<int>& nums, int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }

    return total - sum;
}

int main() {
    // Example array from 1 to n with one number missing
    vector<int> nums = {1, 2, 4, 5}; // Missing number is 3
    int n = 5;

    int missing = findMissingNumber(nums, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}