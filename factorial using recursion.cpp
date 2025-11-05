#include<iostream>
using namespace std;
int factorial(int num)
{
	if(num==1 || num==0){
		return 1;
	}else{
		 return num*factorial(num-1);
	}
}
int main()
{
	int n;
	cout << "enter number";
	cin >> n;
	factorial(n);
	cout << "The factorial of "<<n<<" is " <<factorial(n);
	
}
