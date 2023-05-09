#include<iostream>
using namespace std;
class cow{
	public:
	int no;
	string breed;
	void eating();
	void sleeping();
};
int main(){
	cow c1;
	c1.no=22;
	c1.breed="red sindhi";
	cout<<"the answer is :";
	cout<<c1.no<<endl;
	cout<<c1.breed<<endl;
	return 0;
}