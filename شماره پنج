#include <iostream>

using namespace std;

const int maxCol = 10;

void multiplyByScalar(const int matrix[][maxCol], int row, int col, int scalar, int result[][maxCol]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix[i][j] * scalar;
        }
    }
}

void printMatrix(const int matrix[][maxCol], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int matrix1[2][maxCol] = { {7, 3, 2}, {-2, 6, 1} };
    int result[2][maxCol];

    multiplyByScalar(matrix1, 2, 3, 6, result);

    cout << "matrix1 is :\n";
    printMatrix(matrix1, 2, 3);
    cout << "\nMultiply of matrix1 by 6 is :\n";
    printMatrix(result, 2, 3);

    return 0;
}

//شماره پنج
