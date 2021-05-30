#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
	public:
		complex(){
			real=0;
			img=0;
		}
		void getdata();
		void putdata();
		complex operator+()
		{
			complex c3;
			c3.real=real+c.real;
			c3.img=img+c.real;
			
		}
};

int main()
{
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3=c1+c2;
	c3.putdata();
	
}
