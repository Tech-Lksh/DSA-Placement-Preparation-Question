#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findPeak(int arr[], int size) {
    int s =0;
    int e =size-1;
    int mid = s +(e-s)/2;

    while(s < e) {
        if(arr[mid] < arr[mid+1]) {
            s =mid+1;
        } else {
            e =mid;
        }
        mid = s +(e-s)/2;
    }

    // return s;
    cout << "Peak Element Index is :- " << s << endl;
}
 
int main()
{
    int arr[]  ={10,20,30,50,40,30,20};
    int size = 7;
     
    findPeak(arr, size);
    return 0;
}