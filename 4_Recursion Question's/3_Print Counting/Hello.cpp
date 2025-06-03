#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int n) {
    //Base case
    if(n == 1) {
        cout << 1 << " ";
        return;
    }

    //Recursion Call
    print(n-1);

    // processing
    cout << n << " ";
}
 
int main()
{
    print(10);
    
    return 0;
}