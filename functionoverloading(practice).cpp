#include<iostream>
using namespace std;
int add(int a,int b);
int add(int a,int b,int c);
int add(int a,int b,int c,int d);
int main()
{
	cout <<"a=15 b= 1 c=1 d=1"<<endl;
	cout <<"The multiplication of two numbers is "<<add(15,1)<<endl;
    cout <<"The multiplication of three numbers is "<<add(15,1,2)<<endl;
    cout <<"The multiplication of four numbers is "<<add(15,1,2,1)<<endl;
}
int add(int a,int b){
	return a*b;
}
int add(int a,int b,int c){
	return a*b*c;
}
int add(int a,int b,int c,int d){
	return a*b*c*d;
}

