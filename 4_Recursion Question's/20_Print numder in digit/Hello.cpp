#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

void printNumber(vector<int> num, int size, int index, int &number) {
    // BAse Case
    if(index >= size) {
        return;
    }

    // Processing
    number = number *10 + num;

    // Recursive case
    printNumber(num, size, index+1, number);

    // processing
    cout << number << " ";
}

int main () {
    vector<int> num = {3,5,7,9};
    int size = 4;
    int index = 0;
    int number;

    printNumber(num, size, index, number);

}