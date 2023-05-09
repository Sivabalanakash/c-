#include <iostream>
using namespace std;
class overload
{
	public:
		int a,b,c;
		void area(int d)
		{
			cout<<"area of square is:"<<d*d;
		}
		void area (int d,int b)
		{
			cout<<"\n area of the rectangle "<<d*b;
		}
};
int main()
{
	overload v1;
	v1.area(4);
	v1.area(4,5);
}