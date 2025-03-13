// write a function prototype for a function that calculates the factorial of a number

#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }

    return fact;
}

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;  
    cout<<"The factorial of given number is :"<< fact(n)<<endl;
    cout<<"the factorial is :"<< fact(5);
    return 0;
}
