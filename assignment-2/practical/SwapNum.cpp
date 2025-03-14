// a function to swap two integers using call by reference. 

#include<iostream>
using namespace std;

int swap(int &a, int &b){
    int x;
    x = a;
    a = b;
    b = x;
}


int main(){
    int num1, num2;
  
    cout<<"enter num1: ";
    cin>>num1;
    cout<<"enter num2: ";
    cin>>num2;

    cout<<"Before swapping: \nnum1 = "<<num1<<" \nnum2 = "<<num2;
  
    swap(num1, num2);
    cout<<"\nAfter swapping \nnum1 = "<<num1<<"\nnum2 = "<<num2;

    return 0;
}
