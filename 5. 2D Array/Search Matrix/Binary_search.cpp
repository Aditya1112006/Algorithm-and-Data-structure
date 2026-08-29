#include <iostream>
using namespace std;

int searchMatrix(int mat[][4], int n, int m, int key) {

    for (int i = 0; i < n; i++) {

        int start = 0;
        int end = m - 1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (mat[i][mid] == key) {
                return mat[i][mid];
            }
            else if (key < mat[i][mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
    }

    return -1;
}

int main() {

    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int result = searchMatrix(matrix, 4, 4, 33);

    if (result != -1) {
        cout << "Element found = " << result;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}