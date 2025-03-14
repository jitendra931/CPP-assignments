// a function that prints the elements of an array.

#include<iostream>
using namespace std;

int arraysize(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" , ";
    }
}

int main(){
    int myarray[] = {1,2,3,4,6,8};
    int size = sizeof(myarray) / sizeof(myarray[0]);
    cout<<"Elements of the array: \n";
    arraysize(myarray,size);
    return 0;
}
