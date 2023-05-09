#include<iostream>
using namespace std;
int main()
{
	int a=10, b=0, c;
	try
	{
		if(b==0)
		{
			throw(a);
		}
		else
		
		{
			a/b;
		}
	}
	catch(int i)
	{
		cout<<"Caught exception int type";
	}
	catch(float c)
	{
		cout<<"Caught exception float type";
	}
	catch(char c)
	{
		cout<<"Caught exception char type";
	}
}