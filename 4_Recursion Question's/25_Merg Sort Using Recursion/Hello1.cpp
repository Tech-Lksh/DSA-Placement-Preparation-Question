#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = s+(e-s)/2;

    // find Size
    int lenLeft = mid - s +1;

    //Right size
    int lenRight = e - mid;

    // Dynamic Array creation
    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    // copy left array
    int k = s;
    for(int i=0; i<lenLeft; i++) {
        left[i] = arr[k];
        k++;
    }

    // copy right array
    int k = mid+1;
    for(int i=0; i<lenRight; i++) {
        right[i] = arr[k];
        k++;
    }


    // actuall logic
    int leftIndex = 0;
    int rightIndex = 0;

    int mainArrayIndex = s;
    while(leftIndex < lenLeft && rightIndex < lenRight) {
        if(left[leftIndex] < right[rightIndex] ) {
			arr[mainArrayIndex] =  left[leftIndex];
			mainArrayIndex++;
			leftIndex++;
		}
		else {
			arr[mainArrayIndex] =  right[rightIndex];
			mainArrayIndex++;
			rightIndex++;
		}
    }
}

void mergeSort(int arr[], int size, int s, int e) {
    // Base Case
    if(s >= e) {
        return;
    }

    //Processing
    int mid = s+(s-e)/2;

    //Recursion Case
    // Right side
    mergeSort(arr, size, s, mid);
    //Left case
    mergeSort(arr, size, mid+1, e);

    // Merge Array
    merge(arr, s, e);
}
 
int main() {
    int arr[] = {2,1,6,9,4,5,7};
    int size = 7;
    int s = 0;
    int e = size -1;
    
    return 0;
}