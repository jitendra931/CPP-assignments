// a sapmle c++ program that calculate area of the circle

#include<iostream>
#define pi 3.14
using namespace std;

float FindAreaOfCircle(float a){
    return pi*a*a;
}

int main(){
    cout<<FindAreaOfCircle(5.5);
}
