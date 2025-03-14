// Create an inline function that returns the cube of a number. 

#include<iostream>
using namespace std;

inline int cube(int num){
    return num*num*num;
}

int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;

    cout<<"Cube of the number: "<<cube(num);
    return 0;
}
