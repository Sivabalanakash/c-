#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char input;

    cout << "Enter a value: ";
    cin >> input;

    if (isdigit(input)) {
        cout << "The entered value is a digit." << endl;
    } else if (isalpha(input)) {
        cout << "The entered value is a character." << endl;
    } else {
        cout << "The entered value is neither a digit nor a character." << endl;
    }

    return 0;
}
