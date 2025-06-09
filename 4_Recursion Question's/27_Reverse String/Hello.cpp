#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

void reverseStr(string str, int size, int index) {
    //Base Case
    if(index >= size) {
        return;
    }

    //Recursive case
    reverseStr(str, size, index+1);

    //Processing case
    cout << str[index] << " ";
}
 
int main() {
    string str = "Lokesh";
    int size = str.size();
    int index = 0;
    
    reverseStr(str, size, index);
    return 0;
}