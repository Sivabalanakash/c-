#include<iostream>
using namespace std;
class Employee 
{
public:
char emp_name[20],emp_id[20],address[40],mail_id[20],mobile_no[10];
void empl()
{
cout<<"Enter the Employee name :";
cin>>emp_name;
cout<<"Enter the Employee id :";
cin>>emp_id;
cout<<"Enter the Employee mobile no :";
cin>>mobile_no;
cout<<"Enter the Employee mail :";
cin>>mail_id;
cout<<"Enter the Employee address :";
cin>>address;
}
};
class Programmer : public Employee 
{
public:
double basic_pay;
double calculate_salary() 
{
double da = 0.97 * basic_pay;
double hra = 0.1 * basic_pay;
double pf = 0.12 * basic_pay;
double staff_club_fund = 0.001*basic_pay;
double gross_salary = basic_pay+da+hra;
double net_salary = gross_salary-pf-staff_club_fund;
return net_salary;
}
};
class AssistantProfessor : public Employee 
{
public:
double basic_pay;
double calculate_salary() {
double da=0.97*basic_pay;
double hra=0.1*basic_pay;
double pf=0.12*basic_pay;
double staff_club_fund=0.001*basic_pay;
double gross_salary = basic_pay+da+ hra;
double net_salary = gross_salary - pf - staff_club_fund;
return net_salary;
}
};
class AssociateProfessor : public Employee {
public:
double basic_pay;
double calculate_salary()
{
double da= 0.97*basic_pay;
double hra= 0.1*basic_pay;
double pf= 0.12*basic_pay;
double staff_club_fund=0.001*basic_pay;
double gross_salary=basic_pay+da+hra;
double net_salary=gross_salary-pf-staff_club_fund;
return net_salary;
}
};

class Professor : public Employee 
{
public:
double basic_pay;
double calculate_salary() 
{
double da = 0.97*basic_pay;
double hra = 0.1*basic_pay;
double pf = 0.12*basic_pay;
double staff_club_fund= 0.001*basic_pay;
double gross_salary=basic_pay+da+hra;
double net_salary=gross_salary-pf-staff_club_fund;
return net_salary;
}
};
int main() 
{
Employee e;
e.empl();
Programmer p;
p.basic_pay = 50000;
double p_net_salary = p.calculate_salary();
cout<<endl<<"Programmer pay slip:\n";
cout<<"Name: "<< e.emp_name<<endl;
cout<<"Employee ID: "<< e.emp_id<<endl;
cout<<"Address: "<<e.address<<endl;
cout<<"Email: "<<e.mail_id<<endl;
cout<<"Mobile: "<<e.mobile_no<<endl;
cout<<"Basic Pay: "<<p.basic_pay <<endl;
cout<<"Gross Salary: "<<p.basic_pay+(0.97*p.basic_pay)+(0.1*p.basic_pay)<<endl;
cout<<"Net Salary: "<<p_net_salary<<endl;
return 0;
}