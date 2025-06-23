#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

int  solveUsingMemoization(int n, vector<int>& dp) {
    // Base case
    if(n == 0) return 0;
    if(n == 1) return 1;

    // Check if the value is already computed
    if(dp[n] != -1) return dp[n];

    // Compute the value and store it in the dp array
    dp[n] = solveUsingMemoization(n - 1, dp) + solveUsingMemoization(n - 2, dp);
    return dp[n];
}


int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;


    // Step 1 create a dp array
    vector<int> dp(n+1, -1);
    int ans = solveUsingMemoization(n, dp);  // Using memoization
    cout << ans;
    
    return 0;
}