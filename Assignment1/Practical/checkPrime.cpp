// C++ program to check if a given number is a prime number using a for loop.

#include<iostream>
using namespace std;
int checkprime(int num){
    for(int i = 2; i<=num/2+1; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;
    cout<<"enter number to check prime :";
    cin>>num;
    int prime = checkprime(num);
    if (prime == 0){
          cout<<num<<" Is not prime";

}else{
          cout<<num<<" Is prime";
}
}
