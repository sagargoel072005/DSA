#include <iostream>
using namespace std;

void printAarray(int n, int arr[]){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap_alternate(int n, int arr[]){
    for (int i=0; i < n;i= i + 2){
        if (i + 1 < n){
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main(){
int even[8]={5,2,9,4,7,6,1,0};
int odd[8]={5,2,11,76,43};
swap_alternate(8,even);
printAarray(8,even);
swap_alternate(5,odd);
printAarray(5,odd);
    return 0;
}