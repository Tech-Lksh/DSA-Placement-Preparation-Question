#include<iostream>
using namespace std;


int reverse(int arr[], int size) {
    int fst = 0;
    int lst = size-1;

    while(fst <= lst) {
        swap(arr[fst], arr[lst]);
        fst++;
        lst--;
    }

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}


int main () {
    int arr[] = {2,3,4,5,6,7,8,9};
    int size = 8;
     
    reverse(arr, size);
}