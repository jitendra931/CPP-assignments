// Create a function that modifies the elements of an array using call by reference.


#include<iostream>
using namespace std;

// function to modify the array
int modifiedarray(int arr[], int size){
    for(int i=0; i<size; i++){
        (arr[i]/=2);
    }
}

// function to print the modified array
int printarray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {2,4,6,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    // original array
    cout<<"Original array: ";
    printarray(arr,size);

    //call function to modify array
    modifiedarray(arr,size);

    // Modified array
    cout<<"Modified arr: ";
    printarray(arr,size);

    return 0;
}
