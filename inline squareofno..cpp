#include <iostream>
using namespace std;
inline int getNumber(int n) {
    return n*n;
}
int main() {
	int n;
	cout <<"enter number : ";
	cin>>n;
    cout << "The square of number is: " << getNumber(n) << endl;
    return 0;
}
