#include<iostream>
using namespace std;
class complex{
	int real;
	int img;
    public:
    	complex(int r=0,int i=0){
    		real=r;
    		img=i;
		}
		complex operator *(const complex &obj){
			complex result;
			result.real = (real * obj.real) - (img * obj.img);
            result.img  = (real * obj.img) + (img * obj.real);
			return result;
		}
		void printresult()
		{
			cout<<real<<" + "<<img<<"j";
		}
};
int main()
{
	complex c1(1,3), c2(5,5);
	complex c3=c1*c2;
	c3.printresult();
}
	
	




