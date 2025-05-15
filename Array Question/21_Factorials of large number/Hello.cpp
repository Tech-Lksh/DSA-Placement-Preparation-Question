#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> factorial(int n) {
    vector<int>ans;
    
    ans.push_back(1);
    int carry =0;

    for(int i =2; i <=n; i++) {
        for(int j =0; j <ans.size(); j++) {
            int fact = ans[j] *i +carry;
            ans[j] = fact %10;
            carry =fact /10;
        }

        while(carry) {
            ans.push_back(carry %10);
            carry /=10;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
 
int main()
{
    int n =100;

    factorial(n);
    
    return 0;
}