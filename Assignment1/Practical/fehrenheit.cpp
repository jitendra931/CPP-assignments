// convert celcius to  Fahrenheit

#include<iostream>
using namespace std;

double convertcelcius(double celcius){
    return (celcius*9/5) + 32;
}

int main(){
    double celcius;
    cout<<"enter temperature in celcius : ";
    cin>>celcius;

    cout<<"temperature in fehrenheit : "<<convertcelcius(celcius);
    return 0;
}
