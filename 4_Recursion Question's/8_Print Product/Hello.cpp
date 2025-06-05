#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int product(int n) {
    if(n == 1) {
        return 1;
    }

    int ans = n * product(n-1);
    return ans;
}
 
int main()
{
    cout << product(5) << " ";
    
    return 0;
}