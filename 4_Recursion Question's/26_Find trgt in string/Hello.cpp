#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

// int find(string str, int index, int size, char trgt) {
//     // Base Case
//     if(index >= size) {
//         return -1;
//     }

//     // Processing
//     if(str[index] == trgt) {
//         return index;
//     }

//     // recursive case
//     return find(str, index+1, size, trgt);
// }

int find(string str, int index, int size, char trgt, vector<int> &ans) {
    // Base Case
    if(index >= size) {
        return -1;
    }

    // Processing
    if(str[index] == trgt) {
        ans.push_back(index);
        // return index;
    }

    // recursive case
    find(str, index+1, size, trgt, ans);
}
 
int main() {
    string str = "Lokesh";
    int index = 0;
    int size = str.length();
    char trgt = 'k';
    vector<int> ans;

    find(str, index, size, trgt, ans);

    for(int num : ans) {
        cout << "Indx is : " << num << endl;
    }
    return 0;
}