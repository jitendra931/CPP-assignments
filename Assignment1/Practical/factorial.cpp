// C++ program to find the factorial of a given number using a for loop.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number to calculate factorial : ";
    cin>>n;

    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact*i;
    }
    cout<<"factorial of the given number is: "<<fact;

    return 0;
}
