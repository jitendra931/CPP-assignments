// C++ program to print the Fibonacci series up to a given number of terms using a for loop.

#include<iostream>
using namespace std;
void fab();

int main (){
        
    fab();
    return 0;
}

void fab(){
    int max, min, result;
    min = 0;
    max = 1;
    cout<<min<<" ,"<<max<<" ,";
    for(int i = 0; i<10; i++){
        result = max + min;
        cout<<result<<" ,";
        min = max ;
        max = result;
    }
}
