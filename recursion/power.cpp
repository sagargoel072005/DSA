#include <iostream>
using namespace std;

int power(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    int ans = power(a,b/2);
    if(b%2==0){
       return ans * ans ; 
    }else{
     return a * ans * ans ; 
    }
}

int main(){
    int a,b;
cout << "enter a" << endl;
cin >> a;
cout << "enter b" << endl;
cin >> b;
    
cout <<endl<< "answer is " << power(a,b) << endl;

    return 0;
}