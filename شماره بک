#include <iostream>

using namespace std;

const int maxCol = 10;

// تابع برای دریافت ابعاد و مقادیر ماتریس از کاربر
void inputMatrix(int matrix[][maxCol], int rows, int cols) {
    cout << "Enter the elements of the matrix (" << rows << " x " << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    // دریافت ابعاد ماتریس اول
    cout << "Enter the number of rows and columns for matrix 1: ";
    cin >> rows1 >> cols1;
    int matrix1[maxCol][maxCol]; // تعریف ماتریس اول
    inputMatrix(matrix1, rows1, cols1);

    // دریافت ابعاد ماتریس دوم
    cout << "Enter the number of rows and columns for matrix 2: ";
    cin >> rows2 >> cols2;
    int matrix2[maxCol][maxCol]; // تعریف ماتریس دوم
    inputMatrix(matrix2, rows2, cols2);

    return 0;
}

//شماره یک
