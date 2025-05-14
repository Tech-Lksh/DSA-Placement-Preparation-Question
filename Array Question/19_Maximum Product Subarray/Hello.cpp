#include <iostream>
#include <vector>
using namespace std;

// 1_ Maximum Subarray Product (Brute Force)

int subArrayMaxProduct (int arr[], int size) {
    int max_product = INT16_MIN;

    for(int i =0; i <size; i++) {
        int current_product = 1;
        for(int j =i; j <size; j++) {
            
            current_product = (current_product * arr[j]);
            max_product = max(current_product, max_product);
        }
    }
    cout << "Maximum SubArray Product  is :- " << max_product;
    return 0;
}

int main() {
    int arr[] = {3,4,5,7,11,7,8};
    int size = 7;

    subArrayMaxProduct(arr, size);
}