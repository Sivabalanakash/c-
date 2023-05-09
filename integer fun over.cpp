#include <iostream>
using namespace std;
class PrintIntChar {
public:
    void print(int n, char c) {
        cout << "Printing integer: " << n <<endl;
        cout<< " 	printing character: " << c << endl;
    }
    void print(char c, int n) {
        cout << "		Printing character: " << c <<endl;
        cout<< "			printing integer : " << n << endl;
    }
};
int main() {
    PrintIntChar obj;
    obj.print(30, 'A');
    obj.print('B', 50);
    return 0;
}