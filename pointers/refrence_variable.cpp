#include <iostream>
using namespace std;

//pass by value
void update(int n){
    n++;
}

//pass by refrence
void Update(int& n){
    n++;
}

int main(){
    {/**
     int i=5;
     int& j=i;
     cout<< i << endl;
     i++;
     cout << i << endl;
     j++;
     cout << i << endl;
    **/}

    int n=5;
    update(n);
    cout<< "update 1 " << n << endl;
    Update(n);
    cout<< "update 2 " << n << endl;

    
    return 0;
}