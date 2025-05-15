#include<iostream>
using namespace std;


void shiftNegPos (int arr[], int size) {
    int leftNeg = 0;

    for(int i=0; i<size; i++) {
        if(arr[i] < 0) {
            swap(arr[i], arr[leftNeg]);
            leftNeg++;
        }
    }
}

int main () {
    int arr[] = {-2,-3,-4,5,-1-56,-23,90,50,30};
    int size = 10;

    shiftNegPos(arr, size);
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}