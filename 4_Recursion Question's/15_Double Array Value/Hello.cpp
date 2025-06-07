#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int doubleNum(int arr[], int size, int index) {
    if(index >= size) {
        return -1;
    }
    
    // Processing Case
    arr[index] = arr[index] * 2;
    cout << arr[index] << " ";

    //Recursion Case
    doubleNum(arr, size, index+1);
}
 
int main()
{
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    
    doubleNum(arr, size, index);
    return 0;
}