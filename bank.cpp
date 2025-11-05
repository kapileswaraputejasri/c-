#include<iostream>
using namespace std;

class bank {
public:
    static float balance; // declaration only
    
    void withdrawl() {
    	if(balance<=0){
    		cout<<"Insufficient Funds";
		}
		else{
					
          int wa;
        cout << "\nEnter amount to be withdrawn: ";
        cin >> wa;
        balance -= wa;
        cout << "\nThe balance amount is " << balance << endl;
    }
    }

    void deposit() {
        int da;
        cout << "\nEnter amount to be deposited: ";
        cin >> da;
        balance += da;
        cout << "\nThe balance amount is " << balance << endl;
    }
};

// static member definition (outside the class)
float bank::balance = 0;

int main() {
    bank e1, e2;
    e1.deposit();
    e1.withdrawl();
    e1.deposit();
    e2.deposit();
    e2.withdrawl();
    e2.deposit();

    return 0;
}

