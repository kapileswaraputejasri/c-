#include<iostream>
using namespace std;

class student {
public:
    int rollno;
    student(int r) {
        rollno = r;
    }

    void show() {
        cout << "Roll no. is " << rollno << endl;
    }
};

int main() {
    int r;
    cout<<"Enter roll no. ";
    cin >> r;
    student s1(r); 
    s1.show();

    return 0;
}
