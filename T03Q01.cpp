#include <iostream>
#include <string>
using namespace std;
class employee
{
	string emp_name;
	int emp_id,basic_pay;
	float hra,da,ta,gross,deduction,net_salary;
	public:
		employee(string a,int b,int c)
		{
			emp_name= a;
			emp_id= b;
			basic_pay= c;
		}
		void calculation()
		{
			hra=basic_pay*10/100;
			da=basic_pay*12/100;
			ta=basic_pay*12/100;
			gross=hra+ta+da;
			deduction=10,000;
			net_salary=gross-deduction;
		}
		void display()
		{
			cout<<"\nEmployee name : "<<emp_name;
			cout<<"\nEmployee id : "<<emp_id;
			cout<<"\nEmployee basic salary : "<<basic_pay;
			cout<<"\nEmployee gross salary: "<<gross;
			cout<<"\nEmployee deduction salary : "<<deduction;
			cout<<"\nEmployee net salary : "<<net_salary;
		}
		
};
int main()
{
	employee e("AKASH",1234,1000000);
	e.calculation();
	e.display();
}