#include <iostream>
using namespace std;

void printAarray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int dupliacte_first(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
      else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int dupliacte_last(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
     else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int even[8] = {22, 25, 36, 36, 36, 98, 112, 135};
    int odd[7] = {5, 6, 45, 78, 78, 78, 105};
    printAarray(8, even);
    printAarray(7, odd);

    int index1 = binarySearch(even, 8, 25);
    cout << "Element found at index: " << index1 << endl;
    int index2 = binarySearch(odd, 7, 45);
    cout << "element found at index " << index2 << endl;
    int index3 = binarySearch(even, 8, 255);
    cout << "element found at index " << index3 << endl;
    int index4 = binarySearch(odd, 7, 455);
    cout << "element found at index " << index4 << endl;
    int index6 = dupliacte_first(even, 8, 36);
    cout << "element found at index " << index6 << endl;
    int index5 = dupliacte_last(odd, 7, 78);
    cout << "element found at index " << index5 << endl;

    return 0;
}