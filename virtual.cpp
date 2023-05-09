#include<iostream>
using namespace std;
class Base
{
	public:
		 virtual void show()
		{
			cout<<"I am in Base";
		}
};
class Derived
{
	public:
		 void show()
		{
			cout<<"I am in derived";
		}
};
int main()
{
	Base*bptr;
	Derived D1;
	bptr->show();
}