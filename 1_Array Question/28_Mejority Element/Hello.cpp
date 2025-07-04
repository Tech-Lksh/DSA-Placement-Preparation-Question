#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findMejorityElmt(int arr[], int size) {
    sort(arr, arr+size);
    for(int val=0; val<size; val++) {
            int freq = 0;
            for(int element=0; element<size; element++) {
                if(element == val) {
                    freq++;
                }
            }
            if(freq > size/2) {
                return val;
            }
    }
}
 
int main()
{
    int arr[] = {3,3,3,3,3,3,3,2,2,2,2,2};
    int size = 12;
    
    findMejorityElmt(arr, size);
    
    return 0;
}



























































































