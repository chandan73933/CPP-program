#include<iostream>
using namespace std;
int main()
{
int a,b;
char choice;
cout<<"\n Enter the 2 number:-";
cin>>a>>b;
cout<<"\n enter your choice:-";
cout<<"\n enter 1 for add:-";
cout<<"\n enter 2 for sub:-";
cout<<"\n enter 3 for mul:-";
cout<<"\n enter 4 for div:-";
cin>>choice;
switch(choice)
{
 case '1':
 cout<<a+b;
 break;
 
 case '2':
 cout<<a-b;
 break;
 
 case '3':
 cout<<a*b;
 break;
 
 case '4':
 cout<<a/b;
 break;
 
 default:
 cout<<"enter the valid choice";
 break;
 
}
}
