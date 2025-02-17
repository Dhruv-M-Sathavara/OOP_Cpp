#include <iostream>
#include <string>

using namespace std;

class A{

public:
    int x;

    void encrement(){
        x = x + 1;
    }
};

int main(){

    A a1;
    a1.x = 0;
    A a2;
    a2.x = 6;
    cout<<a1.x<<endl;
    cout<<a2.x<<endl;

    a1.encrement();
    
    cout<<a1.x<<endl;

}