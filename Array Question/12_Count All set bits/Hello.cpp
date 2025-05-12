#include<iostream>
using namespace std;

// 1_Number System Method

// int cuntSetBit(int num) {
//     int count = 0;
//     while(num > 0) {
//         int bit = num % 2;
//         if(bit == 1)
//             count++;
//             num = num/2;
//     }
//     cout << "Count is :- " << count;
// }

// int main () {
//     int num;
//     cout << "Enter value of num :- ";
//     cin >> num;

//     cuntSetBit(num);
// }


// 2_Bitwise Method

int cuntSetBit(int num) {
    int count = 0;
    while(num > 0) {
        int bit = (num & 1);
        if(bit == 1)
            count++;
            num = num>>1;
    }
    cout << "Count is :- " << count;
}

int main () {
    int num;
    cout << "Enter value of num :- ";
    cin >> num;

    cuntSetBit(num);
}