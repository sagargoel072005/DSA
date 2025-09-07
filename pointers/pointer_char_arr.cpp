#include <iostream>
using namespace std;

void print(int *p){
cout<< *p << endl;
}

void update(int *p){
p=p+1;
cout << "inside -" << p << endl;
cout << "inside *p-" << *p << endl;
}


int main(){
int value = 5;
int *p = &value;
cout << "before p-" << p << endl;
cout << "before *p-" << *p << endl;
update(p);
cout << "after p -" << p << endl;
cout << "after *p -" << *p << endl;

    return 0;
}