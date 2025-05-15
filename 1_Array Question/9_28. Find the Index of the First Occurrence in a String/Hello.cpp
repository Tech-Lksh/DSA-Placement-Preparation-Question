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
}
 
int main()
{
    int arr[] ={10,20,20,30,30,30,40,50,60};
    int trgt = 30;
    int size = 9;
    int ans =-1;

    int fstOccrnc =findFirstOccerance(arr, trgt, size, ans);
    if(fstOccrnc == ans) {
        cout << "First Occerance was not found " << endl;
    } else {
        cout << "First Occerance was found : " << fstOccrnc << endl;
    }
    return 0;
}