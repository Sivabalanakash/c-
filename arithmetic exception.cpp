#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0) {
            throw runtime_error("Divide by zero exception");
        }

        int result = num1 / num2;
        cout << "Result: " << result << endl;
    }
    catch (const exception& ex) {
        cerr << "Error: " << ex.what() << endl;
    }

    return 0;
}
