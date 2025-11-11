#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    cout<< q.front() << endl;

    return 0;
}

/*
 #include <iostream>
using namespace std;

class myQueue {
    int *arr;
    int front;   
    int rear;   
    int sz;      
    int cnt;    

public:
    myQueue(int n) {
        sz = n;
        arr = new int[sz];
        front = 0;
        rear = 0;
        cnt = 0;
    }


    bool isEmpty() {
        return cnt == 0;
    }

    bool isFull() {
        return cnt == sz;
    }

    void enqueue(int x) {
        if (isFull()) return;
        arr[rear] = x;
        rear = (rear + 1) % sz;
        ++cnt;
    }

    void dequeue() {
        if (isEmpty()) return;       
        arr[front] = -1;              
        front = (front + 1) % sz;
        --cnt;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        int idx = (rear - 1 + sz) % sz; 
        return arr[idx];
    }
};

 */




 /*
 class Queue{
    int size;
    int *arr;
    int frontIndex;
    int rearIndex;

    public:

    Queue(){
        size = 1000001;
        arr = new int[size];
        frontIndex = 0;
        rearIndex = 0;

    }
    void enqueue(int data){
        if(rearIndex==size){
            cout<< "Queue is Full" << endl;
        }else{
            arr[rearIndex++] = data;
        }

    }
    int dequeue(){
         if(frontIndex==rearIndex){
            return -1;
        }else{
            int ans  = arr[frontIndex];
            arr[frontIndex++] = -1;
            if(frontIndex==rearIndex){
                frontIndex = 0;
                rearIndex = 0;
            }
            return ans;
        }
        

    }
    int front(){
        if(frontIndex==rearIndex){
            return -1;
        }else{
            return arr[frontIndex];
        }

    }
    bool isEmpty(){
        if(frontIndex==rearIndex){
            return true;
        }else{
            return false;
        }

    }
};
 */