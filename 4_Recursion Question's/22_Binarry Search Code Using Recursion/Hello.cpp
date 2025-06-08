#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binSearch(int arr[], int s, int e, int trgt) {
    // Base case
    if(s > e) {
        return -1;
    }

    // processing case
    int mid = s + (e-s)/2;
    if(arr[mid] == trgt) {
        return mid;
    } 
    
    // Recursive case
    if(arr[mid] < trgt) {
        return binSearch(arr, mid+1, e, trgt);
    } else {
        return binSearch(arr, s, mid-1, trgt);
    }
}
 
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;
    int end = size -1;
    int trgt = 40;

    int foundIndx = binSearch(arr, start, end, trgt);

    if(foundIndx != -1) {
        cout << "Target was found Index : " << foundIndx << endl;
    } else {
        cout << "Target was not found ";
    }
    
    return 0;
}