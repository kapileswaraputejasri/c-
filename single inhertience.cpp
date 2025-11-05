#include<iostream>
using namespace std;
class animal{
	public:
		void eat(){
			cout<<"Animals can't our food"<<endl;
		}
		void sleep()
		{
			cout<<"Animals sleeps most in a day"<<endl;
		}
};
class dog: public animal{
	public:
	void bark(){
		cout<<"Dog barks"<<endl;
	}
};
int main()
{
	dog d;
	d.eat();
	d.sleep();
	d.bark();
}
