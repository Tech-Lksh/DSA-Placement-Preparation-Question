#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int prntAllDgtOfIntg(int num) {
    int rem = 0;

    while( num != 0) {
        rem = num%10;
        num = num/10;
        
        cout << rem << endl;
    }
    
}
 
int main()
{
    int num;
    cout << "Enter Value of num :- ";
    cin>>num;
    
    prntAllDgtOfIntg(num);
    return 0;
}