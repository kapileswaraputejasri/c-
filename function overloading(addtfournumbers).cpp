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
	cout <<"a=10 b=8 c=1 d=0"<<endl;
	add(10,8);
	add(10,18,1);
	add(10,8,1,0);
	return 0;
	
	
}
