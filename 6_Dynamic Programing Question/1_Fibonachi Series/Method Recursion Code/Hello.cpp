kl#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

int solveUsingRecursion(int n) {
    // Base case
    if(n == 0) return 0;
    if(n == 1) return 1;


    // Recursive case
    int ans = solveUsingRecursion(n - 1) + solveUsingRecursion(n - 2);
    return ans;
}
 
int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;
    

    int ans = solveUsingRecursion(n);  // Using recursion
    cout << ans;
    return 0;
}





