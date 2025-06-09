#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

void find(int arr[], int arr1[], int size, int size1, vector<int> &ans) {
    for(int i=0; i<size; i++) {
        for(int j=0; j<size1; j++) {
            int currIndx = 0;
            if(arr[i] == arr1[j]) {
                ans.push_back(arr1[j]);
            }
        }
    }
}
 
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
    int arr1[] = {2,4,5,8,3,1,4};
    int size1 = 7;
    vector<int> ans;

    find(arr, arr1, size, size1, ans);
    for(int num : ans) {
        cout << ans[num];
    }
    
    return 0;
}