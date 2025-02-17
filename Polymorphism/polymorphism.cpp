#include<iostream>
#include<string>

using namespace std;

class Student {
public:

    string name;

    Student(){
        cout<<"This is non-parameterized"<<endl;
    };

    Student(string s){
        name = s;
        cout<<"This is parameterized"<<endl;
    }

    void getinfo(){
        cout<<name<<endl;
    };
};

int main(){
    // Student c1;
    Student c1("Dhruv");
    c1.getinfo();

}