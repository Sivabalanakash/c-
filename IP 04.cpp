#include <iostream>
using namespace std;

void find_greatest_smallest(int *a, int *b, int *c, int *greatest, int *smallest) {
    *greatest = *a;
    *smallest = *a;
    if (*b > *greatest) {
        *greatest = *b;
    }
    if (*c > *greatest) {
        *greatest = *c;
    }
    if (*b < *smallest) {
        *smallest = *b;
    }
    if (*c < *smallest) {
        *smallest = *c;
    }
}

int main() {
    int a, b, c, greatest, smallest;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    find_greatest_smallest(&a, &b, &c, &greatest, &smallest);
    cout << "Greatest: " << greatest << endl;
    cout << "Smallest: " << smallest << endl;
    return 0;
}
