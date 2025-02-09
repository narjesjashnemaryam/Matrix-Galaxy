#include <iostream>

using namespace std;

const int maxCol = 10;

void checkMatrixType(const int matrix[][maxCol], int row, int col) {
    bool upperTriangular = true;
    bool lowerTriangular = true;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i < j && matrix[i][j] != 0) {
                lowerTriangular = false;
            }
            if (i > j && matrix[i][j] != 0) {
                upperTriangular = false;
            }
        }
    }

    if (upperTriangular) {
        cout << "The matrix is an upper triangular matrix." << endl;
    } else if (lowerTriangular) {
        cout << "The matrix is a lower triangular matrix." << endl;
    } else {
        cout << "The matrix is neither upper nor lower triangular." << endl;
    }
}

int main() {

    int matrix1[3][maxCol] = { {1, 2, 3}, {0, 5, 6}, {0, 0, 9} }; // Example of upper triangular matrix
    int matrix2[3][maxCol] = { {4, 0, 0}, {5, 6, 0}, {7, 8, 9} }; // Example of lower triangular matrix
    int matrix3[3][maxCol] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // Example of neither

    cout << "Checking matrix1:" << endl;
    checkMatrixType(matrix1, 3, 3);
    
    cout << "\nChecking matrix2:" << endl;
    checkMatrixType(matrix2, 3, 3);
    
    cout << "\nChecking matrix3:" << endl;
    checkMatrixType(matrix3, 3, 3);

    return 0;
}

//شماره دوازده
