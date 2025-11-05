#include<iostream>
using namespace std;

inline int add(int a,int b){
	return a+b;
}
int main(){
	int a,b,c;
	cout << "enter a and b values ";
	cin >> a>>b;
	c=add(a,b);
	cout << c;
	return 0;
}
