#include<iostream>
#include<algorithm>
using namespace std;

int findZeroOneTwo(int arr[], int size) {
    int count = 1;
    // sort(arr.begin(), arr.end());

    for(int i = 0; i<size; i++) {
        if(arr[i] == arr[i+1]) {
            count++;
        } else if (arr[i] != arr[i+1]) {
            cout << arr[i] << " Count is : " << count << endl;
            count = 1;
        }
    }
    return -1;
}

int main () {
    int arr[] = {0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,5,5,5,5,5};
    int size = 28;

    findZeroOneTwo(arr, size);
}