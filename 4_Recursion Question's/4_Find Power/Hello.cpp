#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int pow(int n) {
    // BAse Case...
    if(n == 0) {
        return 1;
    }

    // Recursion Call
    int ans = 2 * pow(n-1);
    return ans;
}
 
int main()
{
    cout << pow(10) << " ";
    
    return 0;
}