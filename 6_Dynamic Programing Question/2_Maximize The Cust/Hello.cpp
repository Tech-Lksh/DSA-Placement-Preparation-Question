#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

class Solution {

    // Your CodeHere
public:
    int solveUsingRecursion(int n, int x, int y, int z, vector<int>& dp) {
        if(n == 0) return 0;
        if(n < 0) return INT_MIN;

        if(n == INT_MIN) {
            return n;
        }

    int opt1 = 1 + solveUsingRecursion(n-x,x,y,z,dp);
    int opt2 = 1 + solveUsingRecursion(n-y,x,y,z,dp);
    int opt3 = 1 + solveUsingRecursion(n-z,x,y,z,dp);

    dp[n] = max(opt1, max(opt2, opt3));
    return dp[n];

    }

    int maximizeTheCuts(int n, int x, int y, int z) {

    // Create a dp array
    vector<int> dp(n+1, INT_MIN);
    int ans = solveUsingRecursion(n,x,y,z,dp);
    return ans;
    }
};