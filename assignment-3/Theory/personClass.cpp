// Class person with private attributes name, age and public method to set and get the values.

#include<iostream>

using namespace std;

class person{
    private:
        string name;
        int age;

    public:
        void setvalues(string n, int a){
            name = n;
            age = a;
        }

        void getvalue(){
            cout<<"\nName : "<<name<<"\nAge : "<<age;
        }

};

int main(){
    person p;

    p.setvalues("Jitenra", 19);
    p.getvalue();
    p.setvalues("raj", 18);
    p.getvalue();

    return 0;
}
