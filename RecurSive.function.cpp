#include <iostream>
using namespace std;

void addMatrices(int A[2][2], int B[2][2], int C[2][2], int row, int col) {
    // شرط پایه: اگر به انتهای ماتریس رسیدیم، به برگشتن ادامه می‌دهیم
    if (row == 2) return; // اگر به انتهای سطرها رسیدیم، برگشت می‌زنیم
    if (col == 2) { // اگر به انتهای ستون‌ها رسیدیم، به سطر بعدی می‌رویم
        addMatrices(A, B, C, row + 1, 0);
        return;
    }
    
    // جمع دو ماتریس
    C[row][col] = A[row][col] + B[row][col];
    
    // ادامه عمل جمع
    addMatrices(A, B, C, row, col + 1);
}

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2]; // ماتریس نتیجه

    addMatrices(A, B, C, 0, 0);

    // نمایش نتیجه
    cout << "Resultant Matrix C:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//شماره پانزده تابع بازگشتی
