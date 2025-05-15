#include<iostream>
// #include<vector>
// #include<algorithm>
using namespace std;

int findTarget(int arr[], int trgt, int size) {
    int st =0, end =size-1;
    int mid = (st+end)/2;

    while(st <=end) {
        if(arr[mid] == trgt) {
            return mid;
        } else if(arr[mid] < trgt) {
            st =mid+1;
        } else if(arr[mid] > trgt) {
            end = mid-1;
        }
        mid = (st+end)/2;
    }

    return -1;
}
 
int main()
{
    int arr[] ={10,20,30,40,50,60,70,80,90};
    int trgt = 90;
    int size = 9;

    int ans = findTarget(arr, trgt, size);
    if(ans == -1) {
        cout << "Target was not found :- " << endl;
    } else {
        cout << "Target was found :- " << arr[ans] << endl;
    }
    
    return 0;
}