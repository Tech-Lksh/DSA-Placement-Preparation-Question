#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMissingElement(int arr[], int size) {
    int s =0, e =size-1;
    int ans =-1;
    int mid = s+(e-s)/2;

    while(s <= e) {
        int diff = arr[mid] -mid;

        if(diff = 1) {
            s =mid+1;
        } else {
            // ans store
            ans = mid;
            // left me jao
            e = mid-1;
        }
        mid = s+(s-e)/2;
    }
    if(ans +1 == 0) {
        return size+1;
    }
    return ans+1;

}
 
int main()
{
    int arr[] ={1,2,3,4,6,7,8,9};
    int size = 8;
    
    cout << findMissingElement(arr, size);
    return 0;
}