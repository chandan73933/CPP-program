#include<iostream>
using namespace std;
template<class T>
T large(T n1,T n2)
{
	return(n1,n2)?n1:n2;
}
int main()
{
	int i1,i2;
	float f1,f2;
	char c1,c2;
	cout<<"\n enter two largest number:";
	cin>>i1>>i2;
	cout<<large(i1,i2)<<" \n large is";
	cout<<"\n enter two floating number:";
	cin>>f1>>f2;
	cout<<large(f1,f2)<<"\n large";
	cout<<"\n enter two chracter :";
	cin>>c1>>c2;
	cout<<large(c1,c2)<<"\n large is";
}
