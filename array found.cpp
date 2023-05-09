#include <iostream>
using namespace std;
int search(int arr[], int size, int x, int index=0){
    if (index == size) {
        return -1;
    }
    if (arr[index] == x) {
        return index;
    }
    return search(arr, size, x, index + 1);
}
int main() {
    int arr[] = {12,34,54,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 11;
    int result = search(arr, size, x);
    if (result == -1) {
        cout << "Element not found\n";
    }
    else {
        cout << "Element found at index " << result << "\n";
    }
    return 0;
}
