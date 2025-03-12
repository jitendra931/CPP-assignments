// print multiplication table

#include<iostream>
using namespace std;

int main(){
    int table;
    cout<<"enter the table number : ";
    cin>>table;

    int i = 1;
    do{
        cout<<table*i<<endl;
        i++;
    }while (i<=10);
}
