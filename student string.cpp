#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        Student() {
            name = "unknown";
        }
        Student(string n) {
            name = n;
        }
        void printName() {
            cout << "Student Name: " << name << endl;
        }
};

int main() {
    Student s1;
    Student s2("Akash kumar");

    s1.printName();
    s2.printName();

    return 0;
}