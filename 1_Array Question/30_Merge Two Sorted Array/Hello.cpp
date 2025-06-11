// Write a code to merge two sorted array
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

void mergeArry(int arr1[], int arr2[], int size1, int size2, vector<int> &ans) {
    int i = 0;
    int j = 0;
    while(i<size1 && j<size2) {
        if(arr1[i]<arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
        }
        else {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i<size1) {
        ans.push_back(arr1[i]);
        i++;
    }

    while(j<size2) {
        ans.push_back(arr2[j]);
        j++;
    }
}

int main() {
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8,10};
    int size1 = 5;
    int size2 = 5;

    vector<int> ans;

    mergeArry(arr1, arr2, size1, size2, ans);
    for(int num : ans) {
        cout << num << " ";
    }

    return 0;
}