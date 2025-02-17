//static in function liife time store value in memory

#include<iostream>
#include<string>

using namespace std;

void fun(){
    static int x = 0;
    cout<<"X: "<<x <<endl;
    x++;
};

int main(){
    fun();
    fun();
}