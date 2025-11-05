#include<iostream>
using namespace std;
class student {
public:
    int roll;
    string name;
    string branch;

    student(int r) {
        roll = r;
        name = "Jahnavi";
        branch="CS";
    }

    student(int r, string n) {
        roll = r;
        name = n;
        branch="ECE";
    }
    student(int r, string n,string b) {
        roll = r;
        name = n;
        branch=b;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << name << endl;
        
    }
};

int main() {
    student s1(10);                 
    student s2(490, "Sree");  
	student s3(388, "Anu","AI&ML");     

    s1.display();
    s2.display();
    s3.display();

    return 0;
}

