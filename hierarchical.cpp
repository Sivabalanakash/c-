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
class C{
	public:
		int c;
		void getdatac();
};
class D:public A,public B,public C{
	public:
	int d;
	void add();
};
void A::getdata(){
	cout<<"enter the value of a: ";
	cin>>a;
}
void B::getdatab(){
	cout<<"enter thee value of b: ";
	cin>>b;
}
void C::getdatac(){
	cout<<"enter the value of c: ";
	cin>>c;
}
void D::add(){
	d=a+b+c;
	cout<<"The value of d is : "<<d;
}
int main(){
	D d1;
	d1.getdata();
	d1.getdatab();
	d1.getdatac();
	d1.add();
	return 0;
}