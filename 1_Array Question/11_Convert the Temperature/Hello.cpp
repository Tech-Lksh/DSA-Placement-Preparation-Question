#include<iostream>
using namespace std;

int convertTemperature(double celsius) {
    // convert Kelvin
    // convert Fahrenheit

    double Kelvin = celsius + 273.15;
    double Fahrenheit = celsius * 1.80 + 32.00;

    cout << "Kelvin is :- " << Kelvin << endl;
    cout << "Fahrenheit is :- " << Fahrenheit << endl;
  
}


int main () {
    double celsius = 36.50;

    convertTemperature(celsius);
}