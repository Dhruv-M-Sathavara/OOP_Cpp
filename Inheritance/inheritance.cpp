#include<iostream>
#include<string>

using namespace std;

class Parent{
public:
    string surname;
    
    Parent(){
        cout<<"First call"<<endl;
    };
};

class Child : public Parent{

public:
    string name;

    Child(){
        cout<<"Call After parent class call"<<endl;
    };

    void getinfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"Surname :"<<surname<<endl;
    };
};

int main(){
    Child c1;
    c1.name ="Dhruv";
    c1.surname = "Sathavara";

    c1.getinfo();
}