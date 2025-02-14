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

    Student(Student &objcopy){ 
        cout<<"This is copy constructo"<<endl;  //created copy constructor
        name = objcopy.name;
        enroll = objcopy.enroll;
        branch = objcopy.branch;

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
    Student s1("Dhruv",27,"CE");
    Student s2(s1); //custome copy constuctor


    // cout<<s1.branch<<endl;
    s2.getinfo();
}