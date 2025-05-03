#include <iostream>

using namespace std;

const int maxCol = 10;

void plusMatrices(const int A[][maxCol], const int B[][maxCol], int row, int col, int C[][maxCol]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void minusMatrices(const int A[][maxCol], const int B[][maxCol], int row, int col, int C[][maxCol]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            C[i][j] = A[i][j] - B[i][j];
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
    int matrix2[2][maxCol] = { {2, 7, -4}, {3, -3, 5} };

    int resultPlus[2][maxCol];
    int resultMinus[2][maxCol];

    plusMatrices(matrix1, matrix2, 2, 3, resultPlus);
    minusMatrices(matrix1, matrix2, 2, 3, resultMinus);

    cout << "matrix1 is :\n";
    printMatrix(matrix1, 2, 3);
    cout << "\nmatrix2 is :\n";
    printMatrix(matrix2, 2, 3);
    
    cout << "\nAddition (plus) of matrix1 and matrix2 is :\n";
    printMatrix(resultPlus, 2, 3);
    
    cout << "\nSubtraction (minus) of matrix1 and matrix2 is :\n";
    printMatrix(resultMinus, 2, 3);

    return 0;
}

//شماره چهار
