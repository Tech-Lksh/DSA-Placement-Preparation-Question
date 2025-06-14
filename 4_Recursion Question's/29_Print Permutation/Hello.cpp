#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

void printPermutations(string str, int index) {
    if(index >= str.length()) {
        cout << str << " ";
        return;
    }

    // Processing each character at the current index
    for(int i = index; i < str.length(); i++) {
        // Swap the current character with the character at the index
        swap(str[index], str[i]);
        
        // Recur for the next index
        printPermutations(str, index + 1);
        
        // Backtrack to restore the original string
        swap(str[index], str[i]);
    }
}
 
int main() {
    string str = "abc";
    int index = 0;

    printPermutations(str, index);
    
    return 0;
}