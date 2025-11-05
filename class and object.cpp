#include<iostream>
#include<cstring>
using namespace std;
class student
{
	public:
	int sno;
	char sname[20],branch[20];
	void display()
	{
		cout << "student reg number : " <<sno<<endl;
		cout << "student name : " <<sname<<endl;
		cout << "student branch : " <<branch<<endl<<endl;
	}
};
int main()
{
	student s1;
	s1.sno=1;
	strcpy(s1.sname,"rahul");
	strcpy(s1.branch,"AIML");
	s1.display();
	student s7;
	s7.sno=7;
	strcpy(s7.sname,"dhoni");
	strcpy(s7.branch,"IT");
	s7.display();
	
	student s10;
	s10.sno=10;
	strcpy(s10.sname,"Sachin");
	strcpy(s10.branch,"DS");
	s10.display();
	student s18;
	s18.sno=18;
	strcpy(s18.sname,"virat");
	strcpy(s18.branch,"CSE");
	s18.display();
	
}
