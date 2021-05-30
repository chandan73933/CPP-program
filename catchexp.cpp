#include<iostream>
using namespace std;
void test(int x)
{
	try{
		if(x==0) throw x;
		else if(x==1) throw x;
		else throw 1.0;
	}
	catch(char c)
	{
		cout<<"\n caught an char";
	}
	catch(int x)
	{
		cout<<"\n caught an int";
	}
	catch(double d)
	{
		cout<<"\n caught an double";
	}
	
	
	
	
	
}
int main()
{
	test(0);
	test(-1);
	test(1);
}

