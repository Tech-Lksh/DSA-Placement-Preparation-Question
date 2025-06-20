#include<iostream>
using namespace std;

int findMinumum (int arr[], int size) {
    int minAns  = INT16_MAX;
    int ans = INT16_MIN;

    for(int i=0; i<size; i++) {
        if(arr[i] < minAns) {
            minAns = arr[i];
        } else if(arr[i] > ans) {
            ans = arr[i];
        }
    }
    cout << "Maximun ans is :- " << ans << endl;
    return minAns;
}

int main() {
    int arr[7] = {2,3,4,1,40,15,80};
    int size = 7;

    int minimum = findMinumum(arr, size);
    cout << "Minimun ans is :- " << minimum << endl;
}








