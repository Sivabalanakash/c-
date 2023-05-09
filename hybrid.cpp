#include<iostream>
using namespace std;
class gp
{
	public:
		void display1()
		{
			cout<<"Sanjay Kumar\n";
		}
};
class f : public gp
{
	public:
		void display2()
		{
			cout<<"192110292\n";
		}
};
class m
{
	public:
		void display3()
		{
			cout<<"2nd Year\n";
		}
};
class child : public f,public m
{
	public:
		void display4()
		{
			cout<<"CSE\n";
		}
};
int main()
{
	child c;
	c.display1();
	c.display2();
	c.display3();
	c.display4();
	return 0;
}