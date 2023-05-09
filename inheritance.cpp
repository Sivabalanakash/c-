#include<iostream>
using namespace std;
	class A
	{
		public:
			int a,b;
			void getdata();
			
	};
	class B:public A
	{
		public:
			int c;
			void add();
		
	};
	void A ::getdata()
	{
		cout<<"enter the value od a and b:";
		cin>>a>>b;
	
	}
void B :: add()
{
	c=a+b;
	cout<<"c value is:"<<c;
}
int main()
{
	B b1;
	b1.getdata();
	b1.add();
}