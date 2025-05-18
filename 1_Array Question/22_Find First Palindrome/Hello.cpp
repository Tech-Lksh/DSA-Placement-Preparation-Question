#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words) {
            if(palindromic(s)) {
                return s;
            }
        }
        return "";
    }

    bool palindromic(string s) {
        int i =0, j =s.length()-1;

        while(i < j) {
            if (s[i] != s[j]) {
                return false;
            } 
            i++, j--;
        }
        return true;
    }
};
 
int main()
{
    vector<string> words = {"abc","car","ada","racecar","cool"};
    firstPalindrome(words);
    return 0;
}