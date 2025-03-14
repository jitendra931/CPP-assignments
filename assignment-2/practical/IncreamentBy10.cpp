// a function that increments the value of an integer by 10 using call by reference.

#include<iostream>
using namespace std; 

int increamentby10(int num){
    return num+=10;
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;

    // original value
    cout<<"original value: "<<num;
    
    //call function -----> call by reference
    cout<<"\nincreamented value: "<<increamentby10(num);
  
    return 0;
}
