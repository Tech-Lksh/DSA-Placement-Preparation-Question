#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printDigit(int num, vector<int> &ans) {
    // Base Case
    if(num == 0) {
        return;
    }
    
    // Processing
    int digit = num % 10;
    // Uptade sum
    num = num / 10;

    // Recursive call
    printDigit(num, ans);

    // processing
    ans.push_back(digit);

    

    
}
 
int main()
{
    int num = 4215;
    vector<int> ans;
    printDigit(num, ans);

    for(int num : ans) {
        cout << num << " ";
    }
    
    return 0;
}