#include <iostream>

using namespace std;

const int maxCol = 10;

int countZeroElements(const int matrix[][maxCol], int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int matrix1[2][maxCol] = { {7, 3, 2}, {-2, 6, 1} };
    int matrix2[3][maxCol] = { {2, 7, -4, -1}, {3, -3, 5, -8}, {6, -7, 2, 3} };

    int zeroCount1 = countZeroElements(matrix1, 2, 3);
    int zeroCount2 = countZeroElements(matrix2, 3, 4);

    cout << "Number of zero elements in matrix1: " << zeroCount1 << "\n";
    cout << "Number of zero elements in matrix2: " << zeroCount2 << "\n";

    return 0;
}

//شماره یازده
