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

void selection_sort(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

int main()
{
    int even[8] = {25, 36, 98, 112, 135,6, 45, 78};
    int odd[7] = {5, 105,6, 45, 98, 788, 78,};

selection_sort(8,even);
selection_sort(7,odd);
    printAarray(8, even);
    printAarray(7, odd);
    return 0;
}