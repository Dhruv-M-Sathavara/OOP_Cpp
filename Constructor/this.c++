#include <iostream>
#include <string>

using namespace std;

class Student{

public:

    Student(){
        branch = "CE";
    };
    Student(string name, int enroll, string branch){
        this -> name = name;
        this -> enroll = enroll;
        this ->  branch = branch;
    };

    string name;
    int enroll;
    string branch;

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"enroll : "<<enroll<<endl;

    };

};

int main(){
    Student s1("Dhruv", 27,"CE");
    cout<<s1.branch<<endl;
    s1.getinfo();
}