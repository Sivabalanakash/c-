#include <iostream>
using namespace std;

class Employee {
  public:
    int empID;
    float basicPay;
    float grossPay;
    float ta;
    float ca;
    Employee(int id, float bp) {
        empID = id;
        basicPay = bp;
    }
    void calculateGrossPay() {
        ta = .07 * basicPay;
        ca = .01 * basicPay;
        grossPay = basicPay + ta + ca;
    }
    void display() {
        cout << "Employee ID: " << empID << endl;
        cout << "Basic Pay: " << basicPay << endl;
        cout << "Ta " << ta << endl;
        cout << "Ca " << ca << endl;
        cout << "Gross Pay: " << grossPay << endl;
    }
};

int main() {
    int empID;
    float basicPay;
    cout << "Enter employee ID: ";
    cin >> empID;
    cout << "Enter basic pay: ";
    cin >> basicPay;
    Employee emp(empID, basicPay);
    emp.calculateGrossPay();
    emp.display();
    return 0;
}
