#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rotateArrayByOne(int arr[], int size) {
    int lastIndex = arr[size-1];

    for(int i=size-1; i>0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = lastIndex;

    for(int k =0; k<size; k++) {
        cout << arr[k] << " ";
    }
}
 
int main()
{
    int arr[] ={1,2,3,4,5};
    int size = 5;
    rotateArrayByOne(arr, size);
    return 0;
}