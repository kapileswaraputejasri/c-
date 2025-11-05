#include<iostream>
using namespace std;

class A {
public:
    void base1() {
        cout << "this is base class 1" << endl;
    }
};

class B {
public:
    void base2() {
        cout << "this is base class 2" << endl;
    }
};


class C : public A, public B {
    
};

int main() {
    C obj;           
    obj.base1();     
    obj.base2();     
    return 0;
}
