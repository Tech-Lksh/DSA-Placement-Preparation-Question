#include<iostream>
using namespace std;

int strStr(int st1[], int st2[], int n1, int n2) {
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n2; j++) {
            if(st1[i] == st2[j]) {
                cout << i;
            }
        }
    }
}

int main () {
    int st1[] = {1,2,3,4,5,6,7,8,9};
    int st2[] = {1,2,3,12};

    int n1 = 9;
    int n2 = 3;
    strStr(st1, st2, n1, n2);
}