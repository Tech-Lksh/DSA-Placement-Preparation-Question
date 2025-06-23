#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

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
    // return 0;


    // Using tabulation
    int ans = solveUsingTabulation(n);
    cout << ans << endl;
    return 0;
}