#include<iostream>
using namespace std;
int main()
{
	int i,j,k,r;
	cout<<"enter the num of rows:";
	cin>> r;
	for(i=0;i<r;i++)
	{
		for(j=r;j>i;j--)
		{
			cout<<" ";
		}
		for(k=0;k<i;k++)
		{
			cout<<" * ";
		}
		cout<<"\n";
	}
	return 0;
}