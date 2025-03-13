// a C++ program to find the smallest number in an array using a for loop.

#include<iostream>
#include<array>

using namespace std; 

int min(int, int, int);
int minarr(array <int, 5> arr);

int main(){
    array <int, 5> a = {1,2,3,4,6};
    cout<<minarr(a);
    return 0;
}

int minarr(array <int, 5> arr){
    int min = arr[0];
    for (size_t i = 1; i>arr.size(); i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}
