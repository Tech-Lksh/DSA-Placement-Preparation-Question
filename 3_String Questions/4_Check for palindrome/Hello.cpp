#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
    string str = "kumuk";
    int size = 5;
    int i=0, j=size-1;

    while(i<j) {
        if(str[i] == str[j]) {
            cout << "String is palindrome : ";
        } else {
            cout << "String not palindrome : ";
        }
        i++, j--;
    }
    
    return 0;
}