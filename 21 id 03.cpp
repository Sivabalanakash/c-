#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person() {
        static int cur_id = 0;
        cur_id++;
    }
    virtual void getdata() {
        cin >> name >> age;
    }
    virtual void putdata() {
        cout << name << " " << age << " ";
    }
};

class Professor : public Person {
    int publications;
    int cur_id;
public:
    Professor() : Person() {
        static int cur_id = 0;
        cur_id++;
        this->cur_id = cur_id;
    }
    void getdata() {
        Person::getdata();
        cin >> publications;
    }
    void putdata() {
        Person::putdata();
        cout << publications << " " << cur_id << endl;
    }
};

class Student : public Person {
    int marks[6];
    int cur_id;
public:
    Student() : Person() {
        static int cur_id = 0;
        cur_id++;
        this->cur_id = cur_id;
    }
    void getdata() {
        Person::getdata();
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }
    void putdata() {
        Person::putdata();
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout << sum << " " << cur_id << endl;
    }
};

int main() {
    int n, type;
    cin >> n;
    Person* person[n];

    for (int i = 0; i < n; i++) {
        cin >> type;
        if (type == 1) {
            person[i] = new Professor();
        }
        else {
            person[i] = new Student();
        }
        person[i]->getdata();
    }

    for (int i = 0; i < n; i++) {
        person[i]->putdata();
    }

    return 0;
}
