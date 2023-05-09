#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
public:
    Person(string firstName, string lastName) {
        this->firstName = firstName;
        this->lastName = lastName;
    }
};

class Student : public Person {
private:
    int stuID;
    vector<int> score;
public:
    Student(string firstName, string lastName, int stuID, vector<int> score) : Person(firstName, lastName) {
        this->stuID = stuID;
        this->score = score;
    }
    char calculate() {
        int sum = 0;
        for (int i = 0; i < score.size(); i++) {
            sum += score[i];
        }
        int average = sum / score.size();
        if (average >= 90) {
            return 'O';
        }
        else if (average >= 80) {
            return 'E';
        }
        else if (average >= 70) {
            return 'A';
        }
        else if (average >= 55) {
            return 'P';
        }
        else if (average >= 40) {
            return 'D';
        }
        else {
            return 'T';
        }
    }
};

int main() {
    string firstName, lastName;
    int stuID;
    vector<int> score;
    
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter student ID: ";
    cin >> stuID;
    cout << "Enter test scores (separated by spaces): ";
    int s;
    while (cin >> s) {
        score.push_back(s);
    }
    
    Student student(firstName, lastName, stuID, score);
    cout << "Grade: " << student.calculate() << endl;
    
    return 0;
}