#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
    string a = "aaabbccccdddddeeee";
    int count = 1;
    for(int i =0; i <a.length(); i++) {
        if(a[i] == a[i+1]) {
            count++;
        } else if(a[i] != a[i +1]) {
            cout << a[i] << count;
            count = 1;
        }
    }
    
    return 0;
}