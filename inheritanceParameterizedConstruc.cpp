#include<iostream>
#include<string>


using namespace std;

class Parent{

public:
    string surname;

    Parent(string s){
        s = surname;
    }
};

class Child : public Parent{

public:
    string name;

    Child(string name ,string n) : Parent(surname){
        n = name;
    }

    void getinfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"Surname :"<<surname<<endl;
    };
};

int main(){
    Child c1("Dhruv","Sathavara");
    c1.getinfo();
}