#include<iostream>
#include<string>

using namespace std;

class Parent{

public:
    string surname;
};

class Child : public Parent {

public:
    string name;
    int age;

    void getinfo(){
        cout<<surname<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
    };
        
};

class Child2 : public Parent{

public:

    string name2;
    int age2;

    void getinfo2(){
        cout<<surname<<endl;
        cout<<name2<<endl;
        cout<<age2<<endl;
        
    };
};

int main(){
    Child c1;
    Child2 c2;

    c1.surname = "Sathavara";
    c1.name = "Dhruv";
    c1.age = 20;

    c2.surname = "Sathavara";
    c2.name2 = "Hetvi";
    c2.age2 = 17;

    c1.getinfo();
    c2.getinfo2();
}