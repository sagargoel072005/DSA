#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter row: ";
    cin >> row;

    cout << "Enter col: ";
    cin >> col;

    // Allocate dynamic 2D array
    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    cout << "Enter array elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nMatrix is:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // move to next row
    }

    // Free memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
