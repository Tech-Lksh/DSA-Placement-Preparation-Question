#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool sortArry(int arr[], int size, int index) {
    if(index >= size) {
        return true;
    }

    // processing
    if(arr[index] > arr[index - 1]) {
        // cout << "Array Is Sorted : ";/
        bool aageKaAns = sortArry(arr, size, index+1);
        return aageKaAns;
    } 
    else {
        return false;
    }

    //Recursice Call
    // sortArry(arr, size, index+1);
}
 
int main()
{
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 1;

    bool isSorted = sortArry(arr, size, index);

    if(isSorted) {
        cout << "Array is Sorted : " << endl;
    } 
    else {
        cout << "Array is not Sorted : " << endl;
    }
    
    return 0;
}