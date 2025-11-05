#include<iostream>
using namespace std;
class base{
private:
	int pri_var;
protected:
	int pro_var;
public:
	base(){
		pri_var=18;
		pro_var=7;
	}
	friend void frndfunction(base& obj);
	

};
void frndfunction(base& obj){
	cout << "private variable: "<< obj.pri_var<<endl;
	     
	cout << "Protected variable: "<< obj.pro_var<<endl ;
	
	
}
int main()
{
	base object1;
	frndfunction(object1);
	return 0;
}









