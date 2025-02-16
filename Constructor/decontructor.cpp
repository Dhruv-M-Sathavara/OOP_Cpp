#include<iostream>
#include<string>

using namespace std;

class Student{


public:

    string name;
    string spi;

    Student(string n, string s){
        name = n;
        spi = s;
    }

    Student(Student &data){
        cout<<"I am cpy"<<endl;
        name = data.name;
        spi = data.spi;
    }

    ~Student (){
        cout<<"I am deconstructor"<<endl;
        
    }

    void Getinfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"Spi :"<<spi<<endl;
    }
};

int main(){

    Student s1("Dhruv","8.39");
    Student s2(s1);

    s2.Getinfo();
}