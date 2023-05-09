#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 3;
int sum_diagonal(int arr[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == j) { 
                sum += arr[i][j]; 
            }
        }
    }
    return sum;
}
int main() {
    int arr[ROWS][COLS] = {{24,16,14},
                           {2,5,4},
                           {12,3,4}};
    int diagonal_sum = sum_diagonal(arr);
    cout << "The sum of diagonal elements is: " << diagonal_sum << endl;
    return 0;
}
