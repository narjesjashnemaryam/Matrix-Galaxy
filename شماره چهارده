#include <iostream>

using namespace std;

const int maxCol = 10;
const int maxRow = 10;

void bubbleSortColumn(int matrix[][maxCol], int rows, int col) {
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            if (matrix[j][col] > matrix[j + 1][col]) {
                // Swap the rows
                for (int k = 0; k < maxCol; k++) {
                    swap(matrix[j][k], matrix[j + 1][k]);
                }
            }
        }
    }
}

int main() {
    int matrix[4][maxCol] = {
        {7, 3, 2, 8},
        {-2, 6, 1, 4},
        {5, 9, 0, 3},
        {4, -1, 6, 2}
    };

    // مرتب‌سازی ستون دوم (index 1)
    bubbleSortColumn(matrix, 4, 1);

    // چاپ نتیجه
    cout << "Matrix after sorting column 1:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

//شماره چهارده
