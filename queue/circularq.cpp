class MyCircularQueue {
    int size;
    int front;
    int rear;
    int* arr;

public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        rear = front = -1;
    }

    bool enQueue(int value) {
        if ( (front == 0 && rear == size - 1) || ((rear + 1) % size == front)) {
            return false;

        } else if (front == -1) {
            front = rear = 0;
        } else if (front != 0 && rear == size - 1) {
            rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = value;
        return true;
    }

    bool deQueue() {
        if (front == -1) {
            return false;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
          front = (front + 1) % size;
        }
        return true;
        ;
    }

    int Front() {
        if(isEmpty()){
            return -1;
        }else{
            return arr[front];
        }
    }

    int Rear() {
        if(isEmpty()){
            return -1;
        }else{
            return arr[rear];
        }}

    bool isEmpty() {
 return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }
};
