#include<iostream>
#include<string>

using namespace std;

class Student {
public:

    string name;
    int roll;
};

class Teacher {
public: 
    int salary;
    string subject;
};

class PA : public Student, public Teacher {



};

int main(){
    PA p1;
    p1.name = "Dhruv";
    p1.roll = 27;
    p1.salary = 25000;
    p1.subject = "SE";

    cout<<p1.name<<endl;
    cout<<p1.roll<<endl;


}