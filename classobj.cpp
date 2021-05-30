#include<iostream>
using namespace std;
class purchase
{
	int item_cost;
	float amount;
	char product_name[50];
	int quantity;
	public:
		void getdata();
		void calculate();
		void display();
};
void purchase :: getdata()
{
	cout<<"\n enter the item_cost you :";
	cin>>item_cost;
	cout<<"\n enter the amount you want:";
	cin>>amount;
	cout<<"\n enter the product_name:";
	cin>>product_name;
	cout<<"\n enter the quantity:";
	cin>>quantity;
	
}
void purchase :: calculate()
{
	amount=(item_cost*quantity);
}
void purchase :: display()
{
	cout<<item_cost;
	cout<<amount;
	cout<<product_name;
	cout<<quantity;
}
int main()
{
	purchase obj;
	obj.getdata();
	obj.calculate();
	obj.display();
}
