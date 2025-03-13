// C++ program to reverse a given number using a while loop.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number to reverse :";
    cin>>num;

    int reverse = 0, remainder;

    while (num != 0){
        remainder = num % 10;
        reverse = reverse*10 + remainder;
        num = num/10;
    }

    cout<<"reversed number :"<<reverse;
    return 0;
}
