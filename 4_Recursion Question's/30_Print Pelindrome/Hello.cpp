// Write a palindrome code
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

int findPalindrome(string str, int size, int index, int lstIndx) {
    // Base case
    if(index < lstIndx) {
        return -1;
    }

    // Processing
    if(str[index] == str[lstIndx]) {
        cout << str[index] << " ";
    }

    findPalindrome(str, size, index + 1, lstIndx - 1);
}
 
int main() {
    string str = "lokekol";
    int size = 6;
    int index = 0;
    int lstIndx = size-1;

    findPalindrome(str, size, index, lstIndx);

    return 0;
}