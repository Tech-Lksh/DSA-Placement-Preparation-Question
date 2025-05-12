#include<iostream>
using namespace std;

int reverseInt(int arr) {
    int ans = 0, rem = 0;
    while(arr != 0) {
        rem = arr%10;
        ans = ans*10+rem;
        arr = arr/10;
    }
    cout << ans;
}

int main () {
    int arr = -123;

    reverseInt(arr);
}