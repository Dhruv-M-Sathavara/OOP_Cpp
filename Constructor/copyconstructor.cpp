#include <iostream>
#include <string>

using namespace std;

class Student{

public:

    Student(){
        branch = "CE";
    };
    Student(string n, int e, string b){
        name = n;
        enroll = e;
        branch = b;
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
    Student s2(s1);  //defauld copy
    cout<<s1.branch<<endl;
    s2.getinfo();
}