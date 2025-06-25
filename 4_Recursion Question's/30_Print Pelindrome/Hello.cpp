#include<iostream>
using namespace std;

bool isPalindrome(string str, int left, int right) {
    // Base case: if left >= right, we’ve checked the whole string
    if (left >= right) return true;

    // If mismatch found
    if (str[left] != str[right]) return false;

    // Recursive call
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    string str = "lokekol";

    if (isPalindrome(str, 0, str.size() - 1)) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is NOT a palindrome" << endl;
    }

    return 0;
}
