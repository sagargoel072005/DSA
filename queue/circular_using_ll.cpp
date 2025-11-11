// class Node {
//   public:
//     int data;
//     Node* next;

//     Node(int new_data) {
//         data = new_data;
//         next = nullptr;
//     }
// };

// class myQueue {
//         Node* front;
//     Node* rear;

//   public:
//     myQueue() {
//        front = NULL;
//        rear = NULL;
//     }

//     bool isEmpty() {
//          return front == NULL;
//     }

//     void enqueue(int x) {
//     Node *temp = new Node(x);
//     if(rear==NULL){
//         front=rear=temp;
//     }else{
//           rear->next = temp;
//     rear = temp;
//     }
//     }

//     void dequeue() {
//           if (isEmpty()) return ;
          
//          int val = front->data;
//         Node* temp = front;
//         front = front->next;

//         if (front == NULL) rear = NULL;

//         delete temp;
//         return;

//     }

//     int getFront() {
//           if (isEmpty()) return -1;
//           return front->data;
//     }

//     int size() {
//          if (isEmpty()) return 0;
//          int cnt=0;
//          Node* temp = front;
//          while(temp!=NULL){
//              cnt++;
//              temp = temp->next;
//          }
//          return cnt;
//     }
// };
