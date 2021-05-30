#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
	public:
	complex();
	complex(int a,int b)
	{
		a=real;
		b=img;
	}
	~complex()
	{
		cout<<"\n obj destroyed ";
	}
	void display()
	{
		cout<<"\n value of real"<<real;
		cout<<"\n value of img"<<img;
	}
};
complex ::complex()
{
	real=0;
	img=0;
}
int main()
{
	complex c1;
	complex c2(5,6);
	complex c3(c2);
	c1.display();
	c2.display();
	c3.display();
	
}
