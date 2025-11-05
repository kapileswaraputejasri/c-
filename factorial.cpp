#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,i;
	int f=1;
	cout <<"Enter the number ";
	cin >> a;
		for(i=1;i<=a;i++){
			f *= i;
		}
			cout << f << endl;
 	return 0;
}
