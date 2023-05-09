#include <iostream>
using namespace std;

class Rectangle {
   public:
      double length;
      double breadth;

      Rectangle() {
         length = 0;
         breadth = 0;
      }
      Rectangle(double l, double b) {
         length = l;
         breadth = b;
      }
      Rectangle(double num) {
         length = num;
         breadth = num;
      }
      double area() {
         return length * breadth;
      }
};

int main() {

   Rectangle rect1;
   Rectangle rect2(4, 5);
   Rectangle rect3(6);
   cout << "Area of rect1 is: " << rect1.area() << endl;
   cout << "Area of rect2 is: " << rect2.area() << endl;
   cout << "Area of rect3 is: " << rect3.area() << endl;
   return 0;
}
