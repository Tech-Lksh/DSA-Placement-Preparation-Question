#include<iostream>
using namespace std;

int cuntSetBit(int num) {
    int count = 0;
    while(num > 0) {
        int bit = num % 2;
        if(bit == 1)
            count++;
            num = num/2;
    }
    cout << "Count is :- " << count;
}

int main () {
    int num;
    cout << "Enter value of num :- ";
    cin >> num;

    cuntSetBit(num);
}