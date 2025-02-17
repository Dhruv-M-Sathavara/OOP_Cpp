#include<iostream>
#include<string>

using namespace std;

class Shape{
public:
    virtual void draw() = 0;
};

class Circle : public Shape{
public:
    void draw(){
        cout<<"I am circle"<<endl;
    };
};  

int main(){
    Circle c1;
    c1.draw();
}