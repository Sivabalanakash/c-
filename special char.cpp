#include <iostream>
#include <cctype> 
using namespace std;
int main() {
    string input;
    bool 
	hasSpecialChar = false;
    cout << "Enter a string: ";
    getline(cin, input);
    for (char c : input) {
        if (!isalnum(c)) { 
            hasSpecialChar = true;
            break;
        }
    }
    if (hasSpecialChar) {
        cout << "The string contains special characters." << endl;
    } else {
        cout << "The string does not contain special characters." << endl;
    }
    return 0;
}
