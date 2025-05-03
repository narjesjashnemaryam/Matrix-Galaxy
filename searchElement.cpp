#include <iostream>

using namespace std;

const int maxCol = 10;

bool searchElement(const int matrix[][maxCol], int row, int col, int element, int &foundRow, int &foundCol) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == element) {
                foundRow = i;
                foundCol = j;
                return true; // عنصر پیدا شد
            }
        }
    }
    return false; // عنصر پیدا نشد
}

int main() {
    int matrix1[2][maxCol] = { {7, 3, 2}, {-2, 6, 1} };
    int elementToSearch = 6;
    int foundRow, foundCol;

    bool found = searchElement(matrix1, 2, 3, elementToSearch, foundRow, foundCol);
    
    if (found) {
        cout << "Element " << elementToSearch << " found at position (" << foundRow << ", " << foundCol << ")." << endl;
    } else {
        cout << "Element " << elementToSearch << " not found in the matrix." << endl;
    }

    return 0;
}

//شماره شش
