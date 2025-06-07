#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int print(int arr[], int size, int index) {
    // Base Case
    if(index >= size) {
    return -1;
    } 

    cout << arr[index] << " ";

    // Recursion case
    print(arr, size, index+1);
}
 
int main()
{
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;

    print(arr, size, index);
    
    return 0;
}