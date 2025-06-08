#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int maximizeTheCut(int n, int x, int y, int z) {
    // base case
    if(n == 0) {
        return 0;
    }
    if(n < 0) {
        return INT_MIN;
    }

    int option1 = 1 + maximizeTheCut(n-x, x, y, z);
    int option2 = 1 + maximizeTheCut(n-y, x, y, z);
    int option3 = 1 + maximizeTheCut(n-z, x, y, z);

    int finalAns = max(option1, option2, option3);
    return finalAns;
}
 
int main()
{
    
    return 0;
}