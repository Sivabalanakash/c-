#include<iostream>
using namespace std;
class F
{
	public:
		void display(){
			cout<<"binary class ";}
		};
	class C:public F
		{
			public:
				void display()
				{
					cout<<"derived class: ";
				}
		};
main()
{
	C c;
	c.display();
	F f;
	f.display();
}