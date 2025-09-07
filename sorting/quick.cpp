#include <iostream>
#include <ctime>
using namespace std;

void printAarray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quick_sort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int p = partition(arr, s, e);
    quick_sort(arr, s, p - 1);
    quick_sort(arr, p + 1, e);
}

int main()
{
    int even[8] = {25, 36, 98, 112, 135, 6, 45, 78};
    int odd[7] = {5, 105, 6, 45, 98, 788, 78};
    srand(time(0)); // seed randomness
    quick_sort(even, 0, 7);
    quick_sort(odd, 0, 6);
    printAarray(8, even);
    printAarray(7, odd);
    return 0;
}