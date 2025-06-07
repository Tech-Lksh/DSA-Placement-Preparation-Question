#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void storeIndx(int arr[], int size, int index, int target, vector<int> &ans) {
    // Base case
    if(index >= size) {
        return;
    }
     
    if(arr[index] == target) {
        ans.push_back(index);
    }

    storeIndx(arr, size, index+1, target, ans);

}
 
int main()
{
    int arr[] = {10,20,20,30,40,20,50,20,20,20};
    int size = 10;
    int index = 0;
    int target = 20;
    vector<int> ans;


    storeIndx(arr, size, index, target, ans);

    for(int num : ans) {
        cout << num << " ";
    }
    return 0;
}