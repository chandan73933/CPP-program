#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the vallue of a&b:";
	cin>>a;
	cin>>b;
	try{
		if(b!=0)
	
		throw b;
	}
	catch(int i)
	{
		cout<<"exception encountered divided by 0";
	}
}
