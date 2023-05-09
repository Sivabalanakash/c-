#include<iostream>
using namespace std;
class employee
{
	public:
		int id; 
		float sal; 
		string name;
		employee(int id, float sal, string name) 
		{
			this->id = id;
			this->sal = sal;
			this->name = name;
		}		
		void display()
		{
			cout << id << " " << sal << " " << name << endl;
		}
};
int main()
{
	employee e1(192121119, 10000, "akash");
	e1.display();
	return 0;
}
