#include <iostream>

using namespace std;

const int maxCol = 10;

// تابع محاسبه جمع عناصر هر سطر
void sumRows(const int matrix[][maxCol], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j]; // جمع کردن عناصر سطر
        }
        cout << "Sum of row " << i << " is: " << sum << endl; // نمایش جمع سطر
    }
}

int main() {
    int matrix1[2][maxCol] = { {7, 3, 2}, {-2, 6, 1} };
    int matrix2[3][maxCol] = { {2, 7, -4, -1}, {3, -3, 5, -8}, {6, -7, 2, 3} };

    // محاسبه و نمایش جمع عناصر هر سطر برای matrix1
    cout << "Sum of rows in matrix1:" << endl;
    sumRows(matrix1, 2, 3);

    // محاسبه و نمایش جمع عناصر هر سطر برای matrix2
    cout << "Sum of rows in matrix2:" << endl;
    sumRows(matrix2, 3, 4);
    
    return 0; // پایان برنامه
}

//شماره هشت
