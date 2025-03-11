// find maximum number usning functions

#include<iostream>
using namespace std;

int findmax(int x, int y, int z){
        int max = x;
    
        if (max<y){
            max = y;
        }
        if (max<z){
            max=z;
        }
    
        
        return max;
}

int main(){
    int a, b, c;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    cout<<"enter c :";
    cin>>c;

    cout<<"max : ";
    cout<<findmax(a,b,c);
    return 0;
    
}
