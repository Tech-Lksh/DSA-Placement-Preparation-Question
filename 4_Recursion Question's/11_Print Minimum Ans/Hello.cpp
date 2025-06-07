#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

void miniAns(int arr[], int size, int index, int &mini) {
    // Base case
    if(index >= size) {
        return;
    }

    // Processing Case
    mini = min(mini, arr[index]);

    //Recursive Case
    miniAns(arr, size, index+1, mini);
}
 
int main()
{
    int arr[] = {10,20,30,4,50,60};
    int size = 6;
    int index =0;
    int mini = INT_MAX;

    miniAns(arr, size, index, mini);
    cout << "Minimum number in array : " << mini << endl;

    
    return 0;
}