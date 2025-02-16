#include <iostream>
#include <string>

using namespace std;

class Students {

public: 

    //non parameterized constuctor
    Students(){
        branch = "CE";
    }

    string name ;
    int enroll;
    string branch;

};

int main(){
    Students s1;
    s1.name = "Dhruv";
    s1.enroll = 27;
    s1.branch;

    cout<<s1.branch<<endl;
    cout<<s1.name<<endl;
    cout<<s1.enroll<<endl;
}