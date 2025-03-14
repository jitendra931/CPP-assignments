// a function that display the number of elements in the array

#include<iostream>
using namespace std;

int elementofarray(int arr[], int size){
    for(int i=0; i<size; i++){
        return (arr, size);
    }
}

int main(){
    int myarray[] = {1,3,4,6,7,9,11,16};
    int size = sizeof(myarray)/sizeof(myarray[0]);

    cout<<"Number of elements in the array: ";
    cout<<elementofarray(myarray,size);

    return 0;
}
