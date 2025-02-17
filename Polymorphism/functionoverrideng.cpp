//example of runtime poly
//example of overriding

//example of compile type poilmorphism


//also example of overloading

#include<iostream>
#include<string>

using namespace std;

class Parent{

public:
    void show(){
        cout<<"Parent"<<endl;
    };

};

class Child : public Parent{

public:

    void show(){
        cout<<"Child"<<endl;
    };
};

int main(){

    // Child c1;
    // c1.show();

    Parent p1;
    p1.show();

}