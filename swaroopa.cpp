#include<iostream>
using namespace std;
template <typename T>
void print( T a)
{
	cout<<"value is"<<a<<endl;
 } 
 template <typename T>
 void print(T a,T b)
 {
 	cout<<"values a,b"<<a<<b<<endl;
 }
 int main()
 {
 	print(37);
 	print(63);
 	
 }
