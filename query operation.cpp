#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int Q = 3;
    vector<vector<int>> queries = {
        {2, 3},     
        {1},      
        {2, 4}  
    };
    for (auto& query : queries) {
        if (query[0] == 1) {
            reverse(arr.begin(), arr.end());
        }
        else if (query[0] == 2) {
            int x = query[1];
            cout << distance(arr.begin(), find(arr.begin(), arr.end(), x)) << endl;
        }
        else if (query[0] == 3) {
            int x = query[1], y = query[2];
            swap(arr[x], arr[y]);
        }
    }

    return 0;
}
