#include<iostream>
using namespace std;
class complex
{
	int real;
	public:
		complex(){
			real=0;
		
		}
		void getdata();
		void display();
		complex operator << (complex c){
			complex c3;
			c3.real=real<<c.real;
		
			return	c3;
		}
};
void complex :: getdata()
{
	cout<<"enter the real =";
	cin>>real;
	
}
void complex :: display()
{
	cout<<"\n real is=:"<<real;
	
}
int main()
{
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3=(c1<<c2);
	c3.display();
}

