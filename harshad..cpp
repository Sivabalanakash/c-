#include <iostream>
using namespace std;

class Harshad {
private:
    int num;
    int sumOfDigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
public:
    Harshad(int n) {
        num = n;
    }
    bool isHarshad() {
        int sum = sumOfDigits(num);
        return num % sum == 0;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Harshad h(num);
    if (h.isHarshad())
        cout << num << " is a Harshad number." << endl;
    else
        cout << num << " is not a Harshad number." << endl;
    return 0;
}
