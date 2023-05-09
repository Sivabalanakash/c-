#include<iostream>
using namespace std;
int main()
{
	int i,j,k,r,a;
	cout<<"enter the num of rows:";
	cin>> r;
	for(i=0;i<r;i++)
	{
		for(j=r;j>=i;j--)
		{
			cout<<" ";
		}
		for(k=i;k>=1;k--)
		{
			cout<<k;
		}
		cout<<"\n";
	}
	return 0;
}