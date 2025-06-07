#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// insert() -> store Even numbur in array inton vector
void insert(int arr[], int size, int index, vector<int> &ans) {
    if(index >= size) {
        return;
    }

    if(arr[index] % 2 == 0) {
        ans.push_back(arr[index]);
    }

    // Recersive Case
    insert(arr, size, index+1, ans);
}
 
int main()
{
    int arr[] ={10,11,12,13,14,15,16,17,18,19,20};
    int size = 11;
    int index = 0;
    vector<int> ans;
    
    insert(arr, size, index, ans);

    // Printing  Vector
    for(int num : ans) {
        cout << num << " ";
    }
    return 0;
}