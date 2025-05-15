#include<iostream>
using namespace std;


int findIntersection(int arr1[], int arr2[], int size) {
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
            }
        }
    }
}

int main () {
    int arr1[] = {2,3,4,5,6,7};
    int arr2[] = {3,2,4,5,1,1};

    int size = 6;

    findIntersection(arr1, arr2, size);
}