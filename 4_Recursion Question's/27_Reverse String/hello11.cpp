#include<iostream>
using namespace std;

void merge(int arr[], int s, int e) {
    int mid = s+(s-e)/2;

    int n1 = mid-s+1;
    int n2 = e-mid;
    
    int *first = new int[n1];
    int *second = new int[n2];

    int mainArrayIndex = s;
    for(int i=0;i<n1;i++) {
        first[i] = arr[mainArrayIndex++];
    }   

    mainArrayIndex = mid+1;
    for(int i=0;i<n2;i++) {
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<n1 && index2<n2) {
        if(first[index1]<second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else {
            arr[mainArrayIndex++] = second[index2++];
        }
    } 

    while(index1<n1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2<n2) {  
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second; 
}

void mergeSort(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }

    // break
    int mid = s+(e-s)/2;

    // left side
    mergeSort(arr, s, mid);
    // Right size
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main() {
    int arr[] = {2,1,4,8,9,13};
    int size = 6;
    int s = 0;
    int e = size-1;

    mergeSort(arr, s, e);

    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    return 0; 
}