#include<iostream>
using namespace std;

int findMaximum (int arr[], int size) {
    int maxAns  = INT16_MIN;

    for(int i=0; i<size; i++) {
        if(arr[i] > maxAns) {
            maxAns = arr[i];
        }
    }
    return maxAns;
}

int main() {
    int arr[7] = {2,0,4,1,40,15,80};
    int size = 7;

    int maximum = findMaximum(arr, size);
    cout << "Maximun ans is :- " << maximum << endl;
}