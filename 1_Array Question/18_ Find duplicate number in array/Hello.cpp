#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findDuplicate(int arr[], int size) {
    for(int  i =0; i <size; i++) {
        for(int j=i+1; j <size; j++) {
            if(arr[i] == arr[j]) {
            cout << arr[j];
            }
        }
    }
}
 
int main()
{
    int arr[] = {2,3,4,5,6,2,3,4,5};
    int size = 9;
    
    findDuplicate(arr, size);
    return 0;
}