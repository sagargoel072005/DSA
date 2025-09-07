#include <iostream>
using namespace std;
#include <climits>
// Function to input a 2D array
void inputArray(int arr[][4], int rows, int cols) {
    cout << "Enter " << rows * cols << " elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
}

// Function to print a 2D array
void printArray(int arr[][4], int rows, int cols) {
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

//function to print row wise sum
int rowsum(int arr[][4], int rows, int cols){
    cout << "row wise sum:" << endl;
    for (int i = 0; i < rows; i++) {
        int sum=0;
        for (int j = 0; j < cols; j++) {
            sum = sum + arr[i][j] ;
        }
        cout << sum << " ";
    }
}

//function to largest row wise sum index
int rowindex(int arr[][4], int rows, int cols){
    int max = INT_MIN;
    int index = -1;
    for (int i = 0; i < rows; i++) {
        int sum=0;
        for (int j = 0; j < cols; j++) {
            sum = sum + arr[i][j] ;
        }
        if(sum>max){
           max=sum;
           index=i;
        }
        
    }
    return index;
}

int main() {
    const int rows = 3, cols = 4;
    int arr[rows][cols];

    inputArray(arr, rows, cols);
    printArray(arr, rows, cols);
    rowsum(arr,rows,cols);
        int maxRowIndex = rowindex(arr, rows, cols);
    cout << "Row with largest sum is: " << maxRowIndex << endl;

    return 0;
}
