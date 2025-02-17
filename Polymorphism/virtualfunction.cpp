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

    virtual void hello(){
        cout<<"Hello from parent";
    }

};

class Child : public Parent{

public:

    void show(){
        cout<<"Child"<<endl;
    };

    void hello(){
        cout<<"hello from child";
    }
};

int main(){

    Child c1;
    c1.show();
    c1.hello();

    // Parent p1;
    // p1.hello();

}