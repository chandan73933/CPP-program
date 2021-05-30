#include<iostream>
using namespace std;
class rectangle
{
	public:
		float length;
		float breadth;
		void getarea();
		void putarea();
};
class cuboid :public rectangle
{
	public:
		float lenght;
		float breadth;
		float height;
		float volume;
		void getvolume();
		void putvolume();
		void calculate();
};
	void rectangle :: getarea()
	{
		cout<<"\n enter the length\n:";
		cin>>length;
		cout<<"\n enter the breadth\n:";
		cin>>breadth;
	}
	void rectangle :: putarea()
	{
		cout<<"\n length is"<<length;
		cout<<"\n breadth is"<<breadth;
	}
	void cuboid :: getvolume()
	{
		cout<<"\n enter the length:";
		cin>>length;
		cout<<"\n enter the breadth:";
		cin>>breadth;
		cout<<"\n enter the height:";
		cin>>height;
	}
	void cuboid :: calculate()
	{
		volume=(length*breadth*height);
		cout<<"\n the volume is"<<volume;
	}
	void cuboid :: putvolume()
	{
		cout<<"\n length is"<<length;
		cout<<"\n breadth is"<<breadth;
		cout<<"\n height is"<<height;
	}
	int main()
	{
		int i;
		cuboid t;
		for(i=1;i<=6;i++)
		{
		t.getarea();
		t.putarea();
		t.getvolume();
		t.putvolume();
		t.calculate();
	}
}
