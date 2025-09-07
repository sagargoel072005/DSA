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

void bubble_sort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j =0; j < n-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                 swapped=true;
            }
        }
        if(swapped == false){
            break; //already sorted
        }
    
    }
}

int main()
{
    int even[8] = {25, 36, 98, 112, 135,6, 45, 78};
    int odd[7] = {5, 105,6, 45, 98, 788, 78,};

bubble_sort(8,even);
bubble_sort(7,odd);
    printAarray(8, even);
    printAarray(7, odd);
    return 0;
}