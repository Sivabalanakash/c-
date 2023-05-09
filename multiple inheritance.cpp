#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void getdata();
};
class B{
	public:
		int b;
		void getdatab();
};
void A::getdata(){
	cout<<"enter the value of a : ";
	cin>>a;
}
void B::getdatab(){
	cout<<"enter the value of b: ";
	cin>>b;
}
class C:public A,public B{
	public:
		int c;
		void add();
};
void C::add(){
	c=a+b;
	cout<<"the value of c is:"<<c;
	}
	int main(){
		C c1;
		c1.getdata();
		c1.getdatab();
		c1.add();
		return 0;	
		}