#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countOccurrences(int arr[], int target) {
    int count = 0;
    for(int i =0; i <10; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    return count;
}
 
int main()
{
    int arr[10] = {1,1,1,1,1,1,1,1,1,1};
    int target = 1;
    
    int countOcc = countOccurrences(arr, target);
    cout << "Count Occurrence is :- " << countOcc;
    return 0;
}