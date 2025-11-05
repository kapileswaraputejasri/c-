#include<iostream>
using namespace std;
class vehicle{
	public:
		vehicle(){
			cout<<"It is from vehicle category";
		}
};
class car : public vehicle{
	public:
		vehicle(){
			cout<<"Car is my favorite vehicle";
		}
};
class sports{
	public:
		sports(){
			cout<<"It is a sports cateogory";
		}
};
class bmw:public car, public sports{
	public:
		bmw(){
			cout << "BMW is a sports car";
		}
};
int main(){
	bmw k;
	k.bmw();
	k.sports();
	k.vehicle();
}
