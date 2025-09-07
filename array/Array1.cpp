#define SIZE 10
#include <iostream>
#include <climits>
using namespace std;

int getmax(int n, int num[]){
    int max = INT_MIN;
    for (int i = 0; i < SIZE; i++) {
        if (max < num[i]){
            max = num[i];
        }}
    return max;
}

int getmin(int n, int num[]){
    int min = INT_MAX;
    for (int i = 0; i < SIZE; i++) {
        if (min > num[i]){
            min = num[i];
        }}
    return min;
}

int sum(int n, int num[]){
    int count = 0;
    for (int i = 0; i < SIZE; i++){
        count = count + num[i];
    }
    return count;
}

int linear_search(int n, int num[], int data){
    for (int i = 0; i < SIZE; i++){
        if (data == num[i]){
            return i;
        }}
    return -1;
}

void reverse_arr(int n, int num[]){
    int start = 0;
    int end = n - 1;
    while (start <= end){
        swap(num[start], num[end]);
        start++;
        end--;
    }
}

int main(){
    int num[SIZE];
    int data;

    for (int i = 0; i < SIZE; i++){
        cout << "Enter number " << i + 1 << ": ";
        cin >> num[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < SIZE; i++){
        cout << num[i] << " ";
    }

    cout << endl;
    cout << "maximum value is " << getmax(SIZE, num) << endl;
    cout << "minimum value is " << getmin(SIZE, num) << endl;
    cout << "sum of all element : " << sum(SIZE, num) << endl;
    cout << "enter element to be search:";
    cin >> data;
    cout << "serached element is at index " << linear_search(SIZE, num, data) << " ";
    cout << endl;
    reverse_arr(SIZE, num);

    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++){
        cout << num[i] << " ";
    }
    cout << endl;
       int arr2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse_arr(9, arr2);
    cout << "Reversed arr2: ";
    for (int i = 0; i < 9; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
