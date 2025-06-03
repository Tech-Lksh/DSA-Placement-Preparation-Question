/* 0, 1, 1, 2, 3, 5, 8, 13, 21, 34   this is a fibonacci series

 piche ke do term se milkar samne wala term banta hai 
Example = n-1 + n-2
          0 + 1 =1 

          */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int fibonaccci(int n) {
    // Base case 
    if(n == 0)  
    return 0;

    if(n == 1)
    return 1;

    // recursion case
    int ans = fibonaccci(n-1) + fibonaccci(n-2);
    return ans;
}
 
int main()
{
    cout << fibonaccci(7) << " ";
    
    return 0;
}