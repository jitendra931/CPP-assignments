// C++ program to find the largest number in an array using a for loop.

#include<iostream>
#include<array>

using namespace std; 

int max(int, int, int);
int maxarr(array <int, 5> arr);

int main(){
    array <int, 5> a = {1,2,3,4,6};
    cout<<maxarr(a);
    return 0;
}

int maxarr(array <int, 5> arr){
    int max = arr[0];
    for (size_t i = 1; i<arr.size(); i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}
