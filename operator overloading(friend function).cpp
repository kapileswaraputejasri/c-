#include<iostream>
using namespace std;

class complex {
    float real;
    float imag;
public:
    complex(float r=0.0, float i=0.0) {
        real = r;
        imag = i;
    }
    // friend function declaration
    friend complex operator+(complex c1, complex c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition (outside class)
complex operator+(complex c1, complex c2) 
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() 
{
    complex a(2.5, 3.5);
    complex b(1.6, 2.4);
    complex c = a + b;     // Friend function called
    cout << "First complex number: ";
    a.display();
    cout << "Second complex number: ";
    b.display();
    cout << "Sum using friend function: ";
    c.display();
    return 0;
}
