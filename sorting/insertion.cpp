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

int main()
{
    int even[8] = {25, 36, 98, 112, 135,6, 45, 78};
    int odd[7] = {5, 105,6, 45, 98, 788, 78,};

 // selection_sort(8,even);
// selection_sort(7,odd);
    printAarray(8, even);
    printAarray(7, odd);
    return 0;
}