#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int createNumUsingDigits(int numberOfDigits) {
    int num = 0;
    for(int i=0; i<numberOfDigits; i++) {
        int digit;
        cout << "Enter Digits :- ";
        cin >> digit;
        cout << endl;

        num = num*10+digit;
        cout << "Number created by digits :- " << num << endl;
    }
    
}
 
int main()
{
    int numberOfDigits;
    cout << "Enter Digits value :- ";
    cin >> numberOfDigits;

    createNumUsingDigits(numberOfDigits);
    
    return 0;
}