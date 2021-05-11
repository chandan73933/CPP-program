#include<iostream>
using namespace std;
class complex
{
	public:
		int real;
		int img;
		complex(){}
		~complex(){}
		friend istream & operator>>(istream &,complex&c);
		friend ostream & operator<<(ostream &,complex&c);		
};
istream & operator>>(istream &din,complex&c)
{
	din>>c.real;
	din>>c.img;
	return din;
}
ostream & operator<<(ostream &dout,complex&c)
{
	dout<<""<<c.real;
	dout<<""<<c.real;
	return dout;
}
int main()
{
	complex c1,c2;
	cin>>c1;
	cin>>c2;
	cout<<c1;
	cout<<c2;
	return 0;
}

