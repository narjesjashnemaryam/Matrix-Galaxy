#include <iostream>
using namespace std;

// تابع مرتب‌سازی درجی
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int rows, cols;
    cout << "تعداد سطر و ستون ماتریس را وارد کنید: ";
    cin >> rows >> cols;

    int matrix[100][100];
    int flat[10000]; // برای ماتریس‌های حداکثر 100x100

    cout << "عناصر ماتریس را وارد کنید:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    // تخت کردن ماتریس
    int index = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            flat[index++] = matrix[i][j];

    // مرتب‌سازی کل آرایه
    insertionSort(flat, rows * cols);

    // بازسازی ماتریس مرتب‌شده
    index = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix[i][j] = flat[index++];

    // چاپ ماتریس مرتب‌شده
    cout << "ماتریس مرتب‌شده به‌طوری‌که هم سطرها و هم ستون‌ها مرتب باشند:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
//شماره شانزده مرتب سازی درجی
