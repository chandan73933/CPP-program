#include<iostream>
using namespace std;
//hybrid inhetance
class M
{
	protected:
		char train_name[50];
		int train_no;
		public:
		void getdata();
		void putdata();
};
class N :virtual public M
{
	protected:
		char name[30];
		int age;
		public:
		void getrecord();
		void putrecord();
};
class P :virtual public M
{
	protected:
		int platform;
		char place[40];
		public:
		void getdetails();
		void putdetails();
};
class Q:public N,public P
{
	protected:
		char destination[70];
		public: 
		void getfile();
		void putfile();
};
void M :: getdata()
{
	cout<<"\n enter the train_name:";
	cin>>train_name;
	cout<<"\n enter the train_no:";
	cin>>train_no;
	
}
void M :: putdata()
{
	cout<<"\n train_name is"<<train_name;
	cout<<"\n train_no"<<train_no;
}
void N :: getrecord()
{
	cout<<"\n enter the name:";
	cin>>name;
	cout<<"\n enter the age:";
	cin>>age;
	
}
void N :: putrecord()
{
	cout<<"\n name is"<<name;
	cout<<"\n age"<<age;
}
void P :: getdetails()
{
	cout<<"\n enter the platform:";
	cin>>platform;
	cout<<"\n enter the place:";
	cin>>place;
	
}
void P :: putdetails()
{
	cout<<"\n platform is"<<platform;
	cout<<"\n place"<<place;
}
void Q :: getfile()
{
	cout<<"\n enter the destination:";
	cin>>destination;
}
void Q :: putfile()
{
	cout<<"\n the destination is"<<destination;
	
}
int main()
{
	Q t;
	t.getdata();
	t.putdata();
	t.getrecord();
	t.putrecord();
	t.getdetails();
	t.putdetails();
	t.getfile();
	t.putfile();
		
}
