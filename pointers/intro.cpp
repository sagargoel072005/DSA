#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int j = 5;
    int *p = 0;
    p = &j;
    int *ptr = &num;
    cout << num << endl;
    cout << "address of num is " << &num << endl;
    cout << "address is " << ptr << endl;
    cout << "value is " << *ptr << endl;
    cout << p << endl;
    cout << *p << endl;

    cout << "..........." << endl;

    int sum = 10;
    int a = sum;
    a++;
    cout << sum << endl;
    int *q = &sum;
    cout << "before" << sum << endl;
    (*q)++;
    cout << "after" << sum << endl;
    int *r = q;
    cout << q << "-" << r << endl;
    cout << *q << "-" << *r << endl;

    cout << "...arithmetic pointer...." << endl;
    int i = 5;
    int *t = &i;
    *t = *t + 1;
    cout << *t << endl;
    cout << "before t" << t << endl;
    t++;
    cout << "after t" << t << endl;
    return 0;
}