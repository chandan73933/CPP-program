#include<iostream>
using namespace std;
class A
{
	public:
	int x;int y;
	void getdata();
	void showdata();
	void operator ++();
};
void A :: getdata()
{
	cin>>x;
	cin>>y;
}
void A :: showdata()
{
	cout<<""<<x;
	cout<<""<<y;
}
void A ::operator++()
{
	++x;
	++y;
	
}
int  main()
{
	A c;
	c.getdata();
	++c;
	c.showdata();
	
}
