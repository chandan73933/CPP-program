#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		int y;
		
		void getdata();
		void putdata();
		void operator --();
};
void A :: getdata()
{
	cin>>x;
	cin>>y;
}
void A :: putdata()
{
	cout<<"\n x="<<x;
	cout<<"\n y="<<y;
}
void A :: operator --()
{
	x--;
	y--;
}

int main()
{
	A obj;
	obj.getdata();
    --obj;
	obj.putdata();

	return 0;
}





