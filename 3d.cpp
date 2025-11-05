#include<iostream>
using namespace std;
class base{
	public:
		base(){
			cout<<"Base class constructor called "<<endl; 
		}
		~base(){
			cout<<"Base class destructor called "<<endl; 
		}
};
class derived1 : public base{
	public:
		derived1(){
			cout<<"Derived1 class constructor called "<<endl;
		}
		~derived1(){
			cout<<"Derived1 class destructor called "<<endl;
		}
};
class derived2 : public derived1{
	public:
		derived2(){
			cout<<"Derived2 class constructor called "<<endl;
		}
		~derived2(){
			cout<<"Derived2 class destructor called "<<endl;
		}
};
//Key Rule to Remember

//Constructors: called top to bottom (base -> derived).

//Destructors: called bottom to top (derived -> base)
int main()
{
	cout << "Creating Object of derived2 class"<<endl;
	derived2 obj;
	cout<<"Exiting main..."<<endl;
	return 0;
}

