#include<iostream>
#include<fstream>
using namespace std;
class employee
{
	int emp_id;
	char emp_name[30];
	float salary;
	public:
		void getdata();
		void putdata();
};
void employee :: getdata()
{
	cout<<" \n enter emp_id =:";
	cin>>emp_id;
	cout<<"\n enter emp_name =:";
	cin>>emp_name;
	cout<<"\n enter the employee salary =:";
	cin>>salary;
}
void employee  :: putdata()
{
	cout<<"\n employee id is"<<emp_id;
	cout<<"\n employee name is"<<emp_name;
	cout<<"\n employee salary"<<salary;
}
int main()
{
	employee s;
	s.getdata();
	s.putdata();
	return 0;
}
	
	
