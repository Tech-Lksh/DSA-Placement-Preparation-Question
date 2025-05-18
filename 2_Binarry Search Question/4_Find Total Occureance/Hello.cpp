#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findFirstOccerance(int arr[], int trgt, int size, int ans) {
    int s =0, e =size-1;
    while(s <=e) {
        int mid = s+(e-s)/2;
        if(arr[mid] == trgt) {
           ans = mid;
           e = mid-1;
        } else if(arr[mid] < trgt) {
            s =mid+1;
        } else if(arr[mid] > trgt) {
            e =mid-1;
        }
    }
    return ans;
};


int findLastOccerance(int arr[], int trgt, int size, int ans) {
    int s =0, e =size-1;
    while(s <=e) {
        int mid = s+(e-s)/2;
        if(arr[mid] == trgt) {
           ans = mid;
           e = mid-1;
        } else if(arr[mid] < trgt) {
            s =mid+1;
        } else if(arr[mid] > trgt) {
            e =mid-1;
        }
    }
    return ans;
};

int findTotalOccurence(int arr[], int size, int trgt) {
    int firstOcc = findFirstOccerance(arr, size, trgt);
    int lastOcc = findLastOccerance(arr, size, trgt);
    int total = lastOcc - firstOcc +1;
    // int total = findLastOccerance - findFirstOccerance +1;

    return total;
}


int main () {
    int arr[] = {10,20,30,30,30,30,30,40,50,60};
    int trgt = 10;
    int size = 10;

    int ans = findTotalOccurence(arr, size, trgt);
    cout << "Total Occ is : " << ans << endl;
}