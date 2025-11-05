#include<iostream>
using namespace std;

class add {
public:
    int a1,b1;
    add(int a, int b) {
        a1=a;
        b1=b;
    }
    void add1()
    {
    	int c=a1+b1;
    	cout<<"The sum of two numbers "<<c<<endl;
	}

    
};

int main() {
    int a, b;
    cout<<"Enter two numbers ";
    cin >> a >> b;
    add a2(a,b);
    a2.add1();        // Show the sum

    return 0;
}

