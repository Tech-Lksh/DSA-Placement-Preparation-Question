#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rotateArrayByOne(int arr[], int size, int kth) {
    int ans[size];
    for(int i =0; i <size; i++) {
        int solve = (i + kth) % size;
        ans[solve] = arr[i];
    }

    for(int i=0; i<size; i++) {
        arr[i] = ans[i];
    }
}
 
int main()
{
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    cout << "Size value is 10 " << endl;

    int kth;
    cout << "Plss Enter Kth Value But kth value always lessthan size value : ";
    cin>>kth;
    
    rotateArrayByOne(arr, size, kth);

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}