#include <iostream>

using namespace std;

const int maxCol = 10;
const int maxRow = 10;

void selectionSort(int matrix[][maxCol], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col - 1; j++) {
            int minIndex = j;
            for (int k = j + 1; k < col; k++) {
                if (matrix[i][k] < matrix[i][minIndex]) {
                    minIndex = k;
                }
            }
            // Swap the found minimum element with the first element
            if (minIndex != j) {
                swap(matrix[i][j], matrix[i][minIndex]);
            }
        }
    }
}

int main() {
    int matrix[3][maxCol] = { {7, 3, 2, 0}, {-2, 6, 1, 5}, {2, 7, -4, -1} };
    
    // Sort rows of the matrix
    selectionSort(matrix, 3, 4);

    // Print sorted matrix
    cout << "Sorted matrix is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }

    return 0;
}

//شماره سیزده
