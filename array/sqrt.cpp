#include <iostream>
using namespace std;
int sqrt(int n){
    int start = 0;
    int end = n ;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if ( mid*mid  == n)
        {
            return mid;
        }
        if ( mid*mid  < n)
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

int main(){

int n;
int ans = sqrt(17);
cout << "ans" << ans << endl;
  return 0;
}