#include <iostream>
using namespace std;
void mergeArrays(int A[], int B[], int C[], int n, int m) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (A[i] < B[j]) {
            C[k] = A[i];
            i++;
        }
        else {
            C[k] = B[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        C[k] = A[i];
        i++;
        k++;
    }
    while (j < m) {
        C[k] = B[j];
        j++;
        k++;
    }
}

int main() {
    int A[] = {2, 4, 6, 8, 10};
    int B[] = {1, 3, 5, 7, 9};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    int C[n+m];
    mergeArrays(A, B, C, n, m);
    for (int i = 0; i < n + m; i++)
        cout << C[i] << " ";
    return 0;
}
