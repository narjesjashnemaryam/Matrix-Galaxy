#include <iostream>
using namespace std;

const int maxCol = 10;

// تابع محاسبه جمع عناصر روی قطر اصلی
int sumDiagonal(const int matrix[][maxCol], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i]; // جمع کردن عناصر روی قطر اصلی
    }
    return sum; // بازگشت جمع
}

int main() {
    int matrix1[2][maxCol] = { {7, 3}, {-2, 6} }; // تغییر اندازه ماتریس به 2x2
    int matrix2[3][maxCol] = { {2, 7, -4}, {3, -3, 5}, {6, -7, 2} }; // تغییر اندازه ماتریس به 3x3

    cout << "Sum of the main diagonal in matrix1: " << sumDiagonal(matrix1, 2) << endl; // محاسبه و نمایش جمع قطر اصلی matrix1
    cout << "Sum of the main diagonal in matrix2: " << sumDiagonal(matrix2, 3) << endl; // محاسبه و نمایش جمع قطر اصلی matrix2

    return 0; // پایان برنامه
}

//شماره ده
