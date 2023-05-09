#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y,z,i,n,index,element;
	int arr[]={13,23,56,78,1001};
	cout<<"enter any two numbers:"<<endl;
	cin>>x>>y;
	try{
		if(y==0){
			throw"division by zero error!";
		}
		z=x/y;
		cout<<"the quotient is"	<<z<<endl;
		}
		catch(const char*msg)
		{
			cout<<"error:"<<msg<<endl;
		}
{
	n=sizeof(arr)/sizeof(arr[0]);
	index=-1;
	cout<<"the elements are in array are 13,23,56,78,1001";
	cout<<"enter the element:";
	cin>>element;
	for(int i=0;i<n;i++)		
	{
		if(arr[i]==element)
		{
			index=i;
			break;
		}
	}
	if(index==-1)
	{
		cout<<"out of boundary"<<endl;
		}
		else
		{
			cout<<"index of"<<element<<"is"<<index<<endl;
			}
			return 0;	
		}
}