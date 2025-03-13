// Implement a c++ program with a function prototype for a function that returns the maximum of three numbers

 
#include<iostream>
using namespace std;

int findmax(int a, int b, int c){
    int max;
    max = a ;
    if(max<b){
        max = b;
    }if(max<c){
        max = c;
    }

    return max;
}

int main(){
    int x,y,z;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;
    cout<<"enter z: ";
    cin>>z;

    cout<<"max : "<<findmax(x,y,z);
    return 0;
}
