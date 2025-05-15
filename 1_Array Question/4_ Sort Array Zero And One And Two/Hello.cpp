#include<iostream>
using namespace std;

int findZeroOneTwo(int arr[], int size) {
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for(int i = 0; i<size; i++) {
        if(arr[i] == 0) {
            zeroCount++;
        } else if(arr[i] == 1) {
            oneCount++;
        } else if(arr[i] == 2) {
            twoCount++;
        }
    }

    cout << "ZeroCount: " << zeroCount << endl;
    cout << "oneCOunt: " << oneCount << endl;
    cout << "twoCOunt: " << twoCount << endl;
}

int main () {
    int arr[] = {0,1,1,1,0,2,0,0,0,0,2,2,2,2,2,1,1,1,1,0};
    int size = 20;

    findZeroOneTwo(arr, size);
}