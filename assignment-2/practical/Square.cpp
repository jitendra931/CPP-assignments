// Write an inline function that calculates the square of a number. 


#include<iostream>
using namespace std;

inline int square(int num){
    return num*num;
}

int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;

    cout<<"Square of the number: "<<square(num);
    return 0;
}
