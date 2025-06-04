#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sum(int n) {
    // Base case 
    if(n==1) {
        return 1;
    }

    // Recursion case
    int ans = n - sum(n-1);
    return ans;
}
 
int main()
{
    cout << sum(5) << " ";
    
    return 0;
}