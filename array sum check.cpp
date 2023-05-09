#include <iostream>
#include <unordered_set>
using namespace std;
bool checkPairSum(int a[], int n, int x) {
    unordered_set<int> s;
    for(int i = 0; i < n; i++) {
        int temp = x - a[i];
        if(s.find(temp) != s.end()) {
            return true;
        }
        s.insert(a[i]);
    }
    return false;
}

int main() {
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the value of x: ";
    cin >> x;
    if(checkPairSum(a, n, x)) {
        cout << "There exists a pair whose sum is " << x << endl;
    } else {
        cout << "There does not exist any pair whose sum is " << x << endl;
    }
    return 0;
}
