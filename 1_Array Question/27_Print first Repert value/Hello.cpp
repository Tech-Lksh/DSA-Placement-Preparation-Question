#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstRepertValue(int arr[], int size) {
    // sort(arr, arr + size);
    for(int i=0; i<size; i++) {
        for(int j=1; j<size; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[j];
            }
        }
    }
}
 
int main()
{
    int arr[] ={2,3,2,9,1,5,6,7};
    int size = 8;
     
    firstRepertValue(arr, size);
    return 0;
}