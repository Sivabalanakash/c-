#include <iostream>
#include <string>
using namespace std;
const int N = 2;
int main() {
    string names[N];
    string reg_nums[N];
    string departments[N];
    string subjects[N];
    char slots[N][4];
    for(int i = 0; i < N; i++) {
        cout << "Enter the name of student " << i+1 << ": ";
        getline(cin, names[i]);

        cout << "Enter the register number of student " << i+1 << ": ";
        getline(cin, reg_nums[i]);

        cout << "Enter the department of student " << i+1 << ": ";
        getline(cin, departments[i]);

        cout << "Enter the subject of student " << i+1 << ": ";
        getline(cin, subjects[i]);

        cout << "Enter the slots (a, b, c, d) of student " << i+1 << " separated by spaces: ";
        for(int j = 0; j < 4; j++) {
            cin >> slots[i][j];
        }
        cin.ignore();
    }

    for(int i = 0; i < N; i++) {
        cout << endl << "Student " << i+1 << " information:" << endl;
        cout << "Name: " << names[i] << endl;
        cout << "Register number: " << reg_nums[i] << endl;
        cout << "Department: " << departments[i] << endl;
        cout << "Subject: " << subjects[i] << endl;
        cout << "Slots: " << slots[i][0] << " " << slots[i][1] << " " << slots[i][2] << " " << slots[i][3] << endl;
    }

    return 0;
}
