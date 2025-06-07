#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printIndx(int arr[], int size, int target, int index) {
    // base case 
    if(index >= size) {
        return;
    }

    if(arr[index] == target) {
        cout << index << " ";
    }

    // recursive case
    printIndx(arr, size, target, index+1);
 

}
 
int main()
{
    int arr[] = {10,20,30,30,30,40,50,30,30,30,30};
    int size = 11; 
    int index = 0;
    int target = 30;

    cout << "Targt index is : ";
    printIndx(arr, size, target, index);
    
    return 0;
}