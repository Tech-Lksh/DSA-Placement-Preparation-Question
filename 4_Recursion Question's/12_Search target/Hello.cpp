#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool search(int arr[], int size, int target, int index) {
    // base case 
    if(index >= size) {
        return false;
    }

    if(arr[index] == target) {
        return true;
    }

    // recursive case
    int ans = search(arr, size, target, index+1);
    return ans;


}
 
int main()
{
    int arr[] = {10,20,30,40,50};
    int size = 60; 
    int index = 0;
    int target = 10;

    cout << "Target was found : " << search(arr, size, index, target) << " ";
    
    return 0;
}