#include<iostream>
using namespace std;
class train{
	public:
		int train_no;
		string destination;
};
int main(){
	train t1;
	t1.train_no=2004;
	t1.destination="chennai";
	cout<<t1.train_no<<endl;
	cout<<t1.destination<<endl;
	return 0;
}