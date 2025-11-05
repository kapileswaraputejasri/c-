#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a>>b>>c;
	int greatest= (a>b)?((a>c)?a:c):((b>c)?b:c);   //** optional
	cout << greatest;  //** optional
	if (a>b && a>c){
		cout << a<<" is greatest";
	}else if(b>a && b>c){
		cout <<b<<" is greatest";
	}else{
		cout <<c<<" is greatest";
	}
	return 0;
}
