#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the multiplication table: ";
	cin>>a;
	cout<<"Enter the value upto which you want to print: ";
	cin>>b;
	for(c=1;c<=b;c++)
	{
		cout<<c<<" * "<<a<<" = "<<c*a<<endl;
	}
}