#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> multiplyMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B, int n) {
    vector<vector<int>> C(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

int main() {
    

    return 0;
}