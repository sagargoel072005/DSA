class MyCircularDeque {
     int front;
    int rear;
    int size;
    int *arr;
public:
    MyCircularDeque(int k) {
         size = k;
       arr = new int[k];
       front = -1;
       rear = -1;
    }
    
    bool insertFront(int value) {
        if((front==0 && rear==size-1) || (rear+1)%size==front){
            return false;
        }else if(front==-1){
            front=rear=0;
        }else if(front == 0){
            front = size-1;
        }else{
            front--;
        }
        arr[front] = value;
        return true;
    }
    
    bool insertLast(int value) {
         if((front==0 && rear==size-1) || (rear+1)%size==front){
            return false;
        }else if(front==-1){
            front=rear=0;
        }else if(rear == size-1){
            rear=0;
        }else{
            rear = (rear + 1) % size;
        }
        arr[rear] = value;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()){
            return false;
        }else{
            int ans = arr[front];
            arr[front]=-1;
            if(front==rear){
                front=rear=-1;
            }else{
                front = (front + 1) % size;
            }
            return true;
        }
    }
    
    bool deleteLast() {
        if(isEmpty()){
            return false;
        }else{
         int ans = arr[rear];
            arr[rear]=-1;
            if(front==rear){
                front=rear=-1;
            }else{
                rear = (rear - 1 + size) % size;
            }
            return true;   
        }
    }
    
    int getFront() {
        if(isEmpty()){
            return -1;
        }else{
            return arr[front];
        }
    }
    
    int getRear() {
        if(isEmpty()){
            return -1;
        }else{
            return arr[rear];
        }
    }
    
    bool isEmpty() {
         return front == -1;
    }
    
    bool isFull() {
         return (rear + 1) % size == front;
    }
};

