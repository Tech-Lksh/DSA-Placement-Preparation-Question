#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int print(int n) {
    // base case
    if(n == 0) {
        return 1;
    }

    // recursive case 
    int ans = n / print(n-1);
}
 
int main()
{
    cout << print(5) << " ";
    
    return 0;
}