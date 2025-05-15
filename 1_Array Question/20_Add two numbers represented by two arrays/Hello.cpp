#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
    int carry =0;
    string ans;
    int i =arr1.size()-1;
    int j =arr2.size()-1;

    while(i >=0 && j >=0) {
        int sum =arr1[i] + arr2[j] + carry;
        int digit = sum%10;
        ans.push_back(digit + '0');
        carry = sum/10;
        i--;
        j--;
    }

    while(i >=0) {
        int sum =arr1[i] + 0 + carry;
        int digit = sum%10;
        ans.push_back(digit + '0');
        carry = sum/10;
        i--;
        j--;
    }

    while(j >=0) {
        int sum =0 + arr2[j] + carry;
        int digit = sum%10;
        ans.push_back(digit + '0');
        carry = sum/10;
        i--;
        j--;
    }

    if(carry) {
        ans.push_back(carry + '0');
    }

    while(ans[ans.size()-1] == '0') {
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());
    cout << "Ans int the form of string is :- " << ans;
}
 
int main()
{
    vector<int> arr1 ={1,2};
    vector<int> arr2 ={2,1};

    // output = 33;
    
    calc_Sum(arr1, arr2);
    return 0;
}