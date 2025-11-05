#include<iostream>
using namespace std;
class Car {
    string brand;
    int year;
public:
    Car() {  
        brand = "Unknown";
        year = 2000;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car c1;
    c1.display();
    return 0;
}

