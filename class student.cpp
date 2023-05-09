#include <iostream>
#include <string>
using namespace std;
class Student
{
	  public:
      string name;
      int regNo;
      string department;
      Student(string n, int r, string d)
      {
         name=n;
         regNo=r;
    	 department=d;
      }
      void display()
      {
         cout<<"Name: "<<name<< endl;
         cout<< "Register No: "<<regNo<<endl;
         cout<< "Department: "<<department<<endl;
      }
};
int main()
{
   Student s1("Akash kumar", 192121119, "IT");
   Student s2("Sanjay kumar",192121118, "CSE");
   Student s3("Dharshini", 192110607, "CSE");
   s1.display();
   s2.display();
   s3.display();
   return 0;
}
