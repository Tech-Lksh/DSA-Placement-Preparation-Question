#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string searchTarget(string name, char trgt, int size) {
    for(int i =0; i <size; i++) {
        if(name[i] == trgt) {
            cout << "output value : " << endl;
            cout << "Target index : " << i << endl << "Target value : " << name[i];
        }
    }
}

 
int main()
{
    string name ="Lokesh";
    cout << "Input Value : " << endl;
    cout << "Sting is : "<< name << endl;
    char trgt = 'k';
    cout << "Target is : " << trgt << endl;

    int size = 6;
    
    searchTarget(name, trgt, size);
    return 0;
}