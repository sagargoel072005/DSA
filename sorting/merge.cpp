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

void merge(int* arr,int s, int e){

}

void mergeSort(int* arr,int s, int e){

}

int main() 
{
    int even[8] = {25, 36, 98, 112, 135,6, 45, 78};
    int odd[7] = {5, 105,6, 45, 98, 788, 78,}; 
    cout << "before sorting " << endl ;
    printAarray(8, even);
    printAarray(7, odd);

    mergeSort(even,0,7);
    mergeSort(odd,0,6);

    cout << "after sorting " << endl ;
    printAarray(8, even);
    printAarray(7, odd);
    return 0;
}