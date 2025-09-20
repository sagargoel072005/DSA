#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        this->next = NULL;
    }
};
// The loop condition while (tail->next != temp) skips printing the last node and may go infinite in some cases.
// In circular lists, printing requires a do-while loop.
void print(Node *tail)
{
    Node *temp = tail;
if(tail==NULL) {
    cout<< "list is empty" << endl;
    return;
}

    do {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != tail);

    cout << "(back to head)" << endl;
}

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else // non empty list
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}


int main()
{
    Node *tail = NULL;
    insertNode(tail, 0, 1);
    insertNode(tail, 1, 2);
    insertNode(tail, 2, 3);
    insertNode(tail, 3, 4);
    insertNode(tail, 1, 2);
    print(tail);
    return 0;
}


// while (tail->next != temp) { 
//     cout << tail->data << "->"; 
//     tail = tail->next;
//  }