#include<iostream>
using namespace std;
class A{
	public :
		int a;
		void getdata();
};
class B:public A{
	public:
		int b;
		void getdatab();
};
class C:public B
{
	public:
	int c;
	void add();
}; 
void A::getdata()
	{
		cout<<"enter the value of value a:"<<endl;
		cin>>a;
	}
	
void B::getdatab()
{
	cout<<"enter the value of b:"<<endl;
	cin>>b;
}
    void C::add(){
    	c=a+b;
    	cout<<"the value of c is:"<<c<<endl;
	}
	int main()
	{
		C c1;
		c1.getdata();
		c1.getdatab();
		c1.add();
		return 0;
	}