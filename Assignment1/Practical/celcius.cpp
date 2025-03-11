// convert Fahrenheit to celcius

#include<iostream>
using namespace std;

double convertfehrenheit(double fehrenheit){
    return (fehrenheit - 32)*5/9;
}

int main(){
    double fehrenheit;
    cout<<"enter temperature in fehrenheit : ";
    cin>>fehrenheit;

    cout<<"temperature in celcius : "<<convertfehrenheit(fehrenheit);

    return 0;
}
