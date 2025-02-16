#include<iostream>
#include<string>

using namespace std;

class Teacher {

private:
    double salary;

public:

    string name;
    string dept;
    string subject;


    void changedept(string newDept){
        newDept = dept;
    }

    
    void setSlary(double s){
        salary = s;
    }

    double getsalary(){
        return salary;
    }


};

int main(){

    Teacher t1;

    t1.name = "Sanjay";
    t1.dept = "CSE";
    t1.subject = "SE";
    t1.setSlary(50000);

    cout<<t1.getsalary()<<endl;
    cout<<t1.name<<endl;
    return 0;
}

