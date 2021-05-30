#include<iostream>
class complex
{

public:
	float real;
	float img;
	complex(float r,float i){
		real=r;
		img=i;
	}
	~complex(){
	}
	friend ostream & operator >> (ostream &out, const complex &c);
	friend istream & operator << (istream &in, complex &c);	
};
istream & operator>>(istream&din,complex &c)
{
	din>>c.real;
	din>>c.img;
	return din;
}
ostream & operator<<(ostream& dout,const complex &c)
{
	dout<<c.real<<c.img;
	return dout;
}
int main()
{
	complex c1,c2;
	cin>>c1;
	cin>>c2;
	cout<<c1;
	cout<<c2;
	
	
}
