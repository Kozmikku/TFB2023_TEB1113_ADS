#include <iostream>
using namespace std;

void rotateMatrix(int mat[][4], int m, int n, int res[][3]) {
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[j][m - i - 1] = mat[i][j];
        }
    }
}

int main() {
    int mat[3][4] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 }
    };

    int res[4][3];

    int m = 3; 
    int n = 4; 

    rotateMatrix(mat, m, n, res);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

