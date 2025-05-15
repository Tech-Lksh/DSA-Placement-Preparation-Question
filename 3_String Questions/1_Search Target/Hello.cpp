#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string searchTarget(string name, string trgt, int size) {
    for(int i =0; i <size; i++) {
        if(name[i] == trgt) {
            cout << "Target is :- " << name[i];
        }
    }
}

 
int main()
{
    string name ="Lokesh";
    string trgt ="k";

    int size = 6;
    
    searchTarget(name, trgt, size);
    return 0;
}