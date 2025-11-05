#include<iostream>
using namespace std;

// Overloaded function: with parameters
int add(int par1, int par2) {
    return par1 + par2;
}

// Overloaded function: without parameters
void add() {
    cout << "No parameters passed to add()" << endl;
}

int main() {
    int a, b;
    cin >> a >> b;

    add();                     // Calls the version with no parameters
    int c = add(a, b);         // Calls the version with two parameters

    cout << c << endl;

    return 0;
}

