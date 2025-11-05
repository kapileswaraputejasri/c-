#include<iostream>
using namespace std;
void add(int a,int b){
	cout<<"sum is: "<<a+b<<endl;
}
void add(int a,int b,int c,int d){
	cout<<"sum of four numbers is: "<<a+b+c+d;
}
void add(int a,int b,int c){
	cout<<"sum of three numbers is: "<<a+b+c<<endl;
}
int main()
{
	cout <<"a=15 b=12"<<endl;
	add(15,12);
	add(15,12,1);
	add(15,12,1,0);
	return 0;
	
	
}
