#include <iostream>
using namespace std;
class Number {
   public:
      int value;
      Number(int num = 0) {
         value = num;
      }
      
      Number operator+(const Number& num) {
         return Number(value + num.value);
      }
      
      void display() {
         cout << "Number: " << value << endl;
      }
};

int main() {
   Number num1(5), num2(10), sum;
   sum = num1 + num2;
   num1.display();
   num2.display();
   sum.display();
   return 0;
}
