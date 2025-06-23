#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

// Fibonacci series using recursion
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
// Each term is the sum of the two preceding terms
int solveUsingRecursion(int n) {
    // Base case
    if(n == 0) return 0;
    if(n == 1) return 1;

    // Recursive case
    int ans = solveUsingRecursion(n - 1) + solveUsingRecursion(n - 2);
    return ans;
}

// Fibonacci series using memoization
int solveUsingMemoization(int n, vector<int>& dp) {
    // Copy  recursion code
    // Base case
    if(n == 0) return 0;
    if(n == 1) return 1;

    // Check if the value is already computed
    if(dp[n] != -1) return dp[n];

    // Compute the value and store it in the dp array
    dp[n] = solveUsingMemoization(n - 1, dp) + solveUsingMemoization(n - 2, dp);
    return dp[n];
}

// Fibonacci series using tabulation
int solveUsingTabulation(int n) {   
    // Create a dp array to store Fibonacci numbers
    vector<int> dp(n+1, -1);
    // Base cases
    dp[0] = 0; // F(0) = 0

    if (n == 0) return dp[0];

    dp[1] = 1; // F(1) = 1

    for(int index = 2; index <= n; index++) {
        // Fill the dp array using the relation F(n) = F(n-1) + F(n-2)
        dp[index] = dp[index - 1] + dp[index - 2];
    }
    return dp[n];
}
 
int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    // int ans = solveUsingRecursion(n);   // Using recursion

    // Create a vector for memoization
    // vector<int> dp(n + 1, -1);
    // cout << solveUsingMemoization(n, dp);
    // return 0;


    // Using tabulation
    int ans = solveUsingTabulation(n);
    cout << "The " << n << "th term in Fibonacci series is: " << ans << endl;
    return 0;
}