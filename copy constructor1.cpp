#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

    Number(const Number &n) {
        value = n.value;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(10);     
    Number n2 = n1;     
    Number n3(n1);      

    n1.display();
    n2.display();
    n3.display();

    return 0;
}

