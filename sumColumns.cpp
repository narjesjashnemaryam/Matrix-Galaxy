#include <iostream>
using namespace std;

const int maxCol = 10;

// تابع محاسبه جمع عناصر هر ستون
void sumColumns(const int matrix[][maxCol], int rows, int cols) {
    for (int j = 0; j < cols; j++) { // پیمایش ستون‌ها
        int sum = 0;
        for (int i = 0; i < rows; i++) { // پیمایش سطرها
            sum += matrix[i][j]; // جمع کردن عناصر ستون
        }
        cout << "Sum of column " << j << " is: " << sum << endl; // نمایش جمع ستون
    }
}

int main() {
    int matrix1[2][maxCol] = { {7, 3, 2}, {-2, 6, 1} };
    int matrix2[3][maxCol] = { {2, 7, -4, -1}, {3, -3, 5, -8}, {6, -7, 2, 3} };

    cout << "Sum of columns in matrix1:" << endl;
    sumColumns(matrix1, 2, 3); // محاسبه و نمایش جمع ستون‌ها برای matrix1

    cout << "\nSum of columns in matrix2:" << endl;
    sumColumns(matrix2, 3, 4); // محاسبه و نمایش جمع ستون‌ها برای matrix2

    return 0; // پایان برنامه
}

//شماره نه
