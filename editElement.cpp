#include <iostream>

using namespace std;

const int maxCol = 10;

// تابع ویرایش یک عنصر مشخص در ماتریس
void editElement(int matrix[][maxCol], int row, int col, int i, int j, int newValue) {
    if (i >= 0 && i < row && j >= 0 && j < col) { // بررسی اینکه آیا ایندکس‌ها معتبر هستند یا خیر
        matrix[i][j] = newValue; // ویرایش عنصر
    } else {
        cout << "Index out of bounds!" << endl; // اگر ایندکس‌ها نامعتبر باشند
    }
}

int main() {
    int matrix1[2][maxCol] = { {7, 3, 2}, {-2, 6, 1} };
    
    // ویرایش یک عنصر مشخص
    int i = 0; // سطر مورد نظر
    int j = 1; // ستون مورد نظر
    int newValue = 10; // مقدار جدید

    editElement(matrix1, 2, 3, i, j, newValue); // ویرایش عنصر

    // چاپ نتیجه برای بررسی
    cout << "Updated matrix1 is:\n";
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++)
            cout << matrix1[x][y] << " ";
        cout << "\n";
    }

    return 0; // پایان برنامه
}

//شماره هفت
