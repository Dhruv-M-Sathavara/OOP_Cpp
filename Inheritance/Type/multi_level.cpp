#include<iostream>
#include<string>

using namespace std;


class Parent {

public:
    string surname;

};

class Child : public Parent {

public:
    string name;
    int age;
};

class Student : public Child{

public:
    string std;

    void getinfo(){
        cout<<surname<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<std<<endl;
    };

};

int main(){
    Student s1;
    s1.name = "Dhruv";
    s1.surname = "Sathavara";
    s1.age = 21;
    s1.std = "SEM 6";

    s1.getinfo();

}