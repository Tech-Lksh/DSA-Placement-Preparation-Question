#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int factorial(int n) {

    // BAse case.....
    if(n == 1) return 1;
    if(n == 0) return 1;

    // Recursion case
    int ans = n * factorial(n-1);
    return ans;
}
 
int main()
{
    cout << factorial(5) << " ";
    
    return 0;
}