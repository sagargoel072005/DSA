#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int size;
public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size-top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<< "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top>=0)
        {
            top--;
        }
        else
        {
            cout<< "stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top>=0)
        {
             return arr[top];
        }
        else
        {
            cout<< "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top== -1 )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(7);
    st.pop();
    
   cout << "top element " << st.peek() << endl;;

    return 0;
}

/*
    ///using stl

    // stack<int> s;
    // s.push(1);
    // s.push(2);
    //  s.push(3);
    // s.push(4);
    // cout<< s.top() << endl;
*/