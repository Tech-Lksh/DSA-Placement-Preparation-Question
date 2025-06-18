#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;
void findLen(string str, int length, string str1, int length1, vector<string> &ans) {
    
    int i = 0, j = 0;
    while(i < length && j < length1) {
        int index = 0;
        if(str[i] == str1[j]) {
            // ans.push_back(str1[j]);
            cout << str1[j] << " ";
            index = j;
            
        }
        j++;
        i++;

    }
}
 
int main() {
    string str = "ABCDEFGH";
    int length = str.length();
    string str1 = "BDGFCJHE";
    int length1 = str1.length();
    vector<string> ans;

    findLen(str, length, str1, length1, ans);
    
    return 0;
}