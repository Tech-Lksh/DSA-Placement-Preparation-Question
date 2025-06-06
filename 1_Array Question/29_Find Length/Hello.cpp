#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
    string arr = "ABCDEFGH";
    string arr1 = "BECDFKAGIJ";

    int count = 0;

    for(int i=0; i<arr.length(); i++) {
        for(int j=0; j<arr1.length(); j++) {
            if(arr[i] == arr1[j]) {
                count++;
                j=j;
                // cout << count;
            } else {
                count = 1;
            }
        }
    }
    cout << count;
    
    return 0;
}