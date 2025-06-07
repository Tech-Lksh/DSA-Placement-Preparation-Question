#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findArr(int arr[], int size, int target, int index) {
    // base case 
    if(index >= size) {
        return -1;
    }

    if(arr[index] == target) {
        return index;
    }

    // recursive case
    findArr(arr, size, target, index+1);
 

}
 
int main()
{
    int arr[] = {10,20,30,40,50};
    int size = 5; 
    int index = 0;
    int target = 30;

    cout << "Target was found : " << findArr(arr, size, target, index) << " ";
    
    return 0;
}