// a c++ program that takes two integers and returns their product using functions 

#include<iostream>
using namespace std;

int product(int a, int b){
    return a*b;
}

int main(){
    int x, y;
    cout<<"enter x : ";
    cin>>x;
    cout<<"enter y : ";
    cin>>y;
    
    cout<<"product : "<<product(x,y);

    return 0;
}
