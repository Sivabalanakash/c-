#include <iostream>
using namespace std;
void extra_element(int A[], int B[], int N) {
    int i, j, a;
    for (i = 0; i < N; i++) {
        a = 0;
        for (j =0; j<N-1;j++) {
            if (A[i] == B[j]) {
                a = 1;
                break;
            }
        }
        if (a == 0) {
            cout << "Extra element: " << A[i] << endl;
            return;
        }
    }
}
int main() {
    int A[] = {14, 21 , 5, 19, 8, 4, 23, 11};
    int B[] = {23, 8, 19, 4, 14, 11, 5};
    int N = sizeof(A) / sizeof(A[0]);
    extra_element(A, B, N);
    return 0;
}
