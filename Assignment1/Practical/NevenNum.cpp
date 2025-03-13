// C++ program to print the first N even numbers using a for loop.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;

    int sum = 0;
    for(int i = 0; i<=num; i++){
        sum+=2*i;
    }
    cout<<"sum of first n even numbers : "<<sum;
    return 0;
}
