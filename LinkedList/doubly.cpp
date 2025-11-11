#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;
    Node *prev = NULL;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
     ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void print(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
     cout << "NULL" << endl;
}

int getLength(Node *&head){
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insertAtHead(Node *&head,Node *&tail, int d)
{
    if(head==NULL){
        Node *temp = new Node(d);
        head=temp;
        tail=temp;
        return;
    }
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail,Node *&head, int d)
{
    if(tail==NULL){
         Node *temp = new Node(d);
        tail=temp;
        head=temp;
        return;
    }
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int d, int position){
    if (position == 1)
    {
        insertAtHead(head,tail, d);
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp->next != NULL)
    {
        temp = temp->next;
        cnt++;
    }
        if (temp->next == NULL)
    {
        insertAtTail(tail,head, d);
        return;
    }
    Node *newnode = new Node(d);
    newnode->next = temp->next;
    temp->next = newnode;
    temp->next->prev = newnode;
    newnode->prev = temp;

}

void deleteNode(Node *&head, int position){
    // deleting first node
    if (position == 1){
        Node *temp = head;
        temp->next->prev = NULL;
         head = temp->next;
         temp->next=NULL;
        delete temp; // memory free
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next = curr->next;
        curr->next->prev = prev;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head,tail, 20);
    insertAtHead(head,tail, 30);
    insertAtTail(tail,head, 40);
    insertAtPosition(head, tail,50, 2);
    print(head);
    cout << endl;
    deleteNode(head,2);
    print(head);
    cout << "length is " << getLength(head);
    return 0;
}
