#include <iostream>

using namespace std;

const int maxCol = 10;

void multiply(const int A[][maxCol], const int B[][maxCol], int m, int p, int n, int C[][maxCol]) {
    int i, j, k, sum;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            sum = 0;
            for (k = 0; k < p; k++)
                sum += A[i][k] * B[k][j];
            C[i][j] = sum;
        }
}

int main() {
    int matrix1[2][maxCol] = { {7, 3, 2}, {-2, 6, 1} };
    int matrix2[3][maxCol] = { {2, 7, -4, -1}, {3, -3, 5, -8}, {6, -7, 2, 3} };

    int result[2][maxCol];
    multiply(matrix1, matrix2, 2, 3, 4, result);

    return 0;
}

//شماره سه
