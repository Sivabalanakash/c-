#include<iostream>
using namespace std;
class Grandfather{
	public:
		int property;
		void getdata();
};
class Grandson:public Grandfather
{
	public:
		int property2;
		void getdata2();
};
void Grandfather::getdata(){
	cout<<"enter the property value of grandfather:";
	cin>>property;
}
void Grandson::getdata2(){
	cout<<"value of property of grandson is:"<<property<<endl;
}
int main(){
	Grandson g1;
	g1.getdata();
	g1.getdata2();
	return 0;
}