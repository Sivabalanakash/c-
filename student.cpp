#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int id;
		void insert(int i,string n){
			id=i;
			name=n;
		}
		void display()
		{
			cout<<id<<" "<<name<<endl;
		}
};
int main()
{
	student s1;
	student s2;
	s1.insert(201,"ajay");
	s2.insert(202,"haneef");
	s1.display();
	s2.display();
	return 0;
}