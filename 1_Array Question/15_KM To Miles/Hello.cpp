#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

float KMtoMiles(float km) {
    float _1kmMiles = 0.621371;
    float miles = km * _1kmMiles;

    cout << "Miles is :- " << miles;
}
 
int main()
{
    float km;
    cout << "Tell me Km :- ";
    cin>>km;

    KMtoMiles(km);
    
    return 0;
}