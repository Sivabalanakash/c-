#include<iostream>
using namespace std;
int main()
{
  float radius, area;

  cout << "Enter radius of circle: ";
  cin >> radius;

  area = 3.14*radius*radius;
  cout << "Area = " << area << endl;

  return 0;
}