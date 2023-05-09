#include <iostream>
void AddEnd4(int A[][4], int R, int C) {
    int sum = 0;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (A[i][j] % 10 == 4) { 
                sum += A[i][j]; 
            }
        }
    }

    std::cout << "The sum of all values ending with 4 is: " << sum << std::endl;
}

int main() {
    int arr[2][4] = {{24, 16, 14, 8}, {19, 5, 4, 42}};
    AddEnd4(arr, 2, 4);

    return 0;
}
