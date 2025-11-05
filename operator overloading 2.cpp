#include<iostream>
using namespace std;
class demo{
	int n;
	public:
		demo(int x)
		{
			n=x;
		}
		demo operator-()
		{
			return demo(-n);
		}
		void display()
		{
			cout<<" Value= " <<n<<endl;
		}
		
};
int main()
{
	demo ob1(5);
	demo ob2 = -ob1;
	cout<<"Original Object ";
	ob1.display();
	cout<<"After applying unary minus: ";
	ob2.display();
	
}
