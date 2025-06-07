#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int maxNum(int arr[], int size, int index, int &maxi) {
    if(index >= size) {
        return -1;
    }

    // processing Case

    maxi = max(maxi, arr[index]);

    // recursive case
    maxNum(arr, size, index+1, maxi);
}
 
int main()
{
    int arr[] = {10,20,30,430,50,60};
    int size = 6;
    int index = 0;    
    int maxi = INT_MIN;

    maxNum(arr, size, index, maxi);
    cout << "Maximun number in Array : " << maxi << endl;
    return 0;
}