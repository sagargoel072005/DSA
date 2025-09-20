#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
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

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int d){
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 0;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *newnode = new Node(d);
    newnode->next = temp->next;
    temp->next = newnode;

    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
}

void deleteNode(int position, Node *&head){
    // deleting first node
    if (position == 1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp; // memory free
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<=position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{
    // created a newnode
    Node *node1 = new Node(10);

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    InsertAtHead(head, 20);
    InsertAtHead(head, 30);
    InsertAtHead(head, 40);
    InsertAtHead(head, 50);
    InsertAtTail(tail, 0);
    print(head);
    cout<< endl;
    InsertAtPosition(head, tail, 2, 90);
    print(head);
    cout<< endl;
    deleteNode(6,head);
    print(head);
    cout<< endl;

    return 0;
}