#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

};

void print(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout << temp->data << " "; 
        temp = temp->next;
    }
    cout << endl;
    
}

int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp!=NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
    
}

void insertAtHead(Node* &tail, Node* &head, int d) {

    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else {
        Node* temp = new Node(d); //create a new node
        temp->next = head; //temp ke next ko head ko point karado 
        head->prev = temp; //head ke prev ko temp point karado
        head = temp; //head ko nayi position pe le aao
    }
}

void insertAtTail(Node* &tail, Node* &head, int d) {
    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else {    
        Node* insert = new Node(d);
        tail->next = insert;
        insert->next = NULL;
        insert->prev = tail;
        tail = insert;
    }
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    
    //insert at position 1 or start
    if(position == 1) {
        insertAtHead(tail, head, d);
        return;
    }

    //create temp node for traversing
    Node* temp = head;
    int cnt = 1;
    //traverse the array
    while (cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //if tail reached, insert at tail
    if(temp->next == NULL) {
        insertAtTail(tail, head, d);
        return;
    }

    //insert at position
    Node* insert = new Node(d);
    insert->next = temp->next;
    temp->next->prev = insert;
    temp->next = insert;
    insert->prev = temp;

    
}

void deleteNode(Node* &head, Node* &tail, int position) {
    //deleting first position or start node
    if(position == 1) {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    //deleting any middle node
    else {

        //create a node for traversing
        Node* current = head;
        Node* prev = NULL;

        //traverse through the array
        int cnt = 1;

        while (cnt < position) {
            prev = current;
            current = current->next;
            cnt++;
        }

        current->prev = NULL;
        prev->next = current->next;
        current->next = NULL;
        delete current;   


    }
}

int main()
{
    //case 1 when new node is created
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    //case 2 when head and tail is null
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout << "Length: " <<  getLength(head) << endl;

    insertAtHead(tail, head, 11);
    print(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    cout << endl;

    insertAtHead(tail, head, 20);
    print(head);
     cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    cout << endl;
    
    insertAtHead(tail, head, 13);
    print(head);
     cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    cout << endl;
    
    insertAtTail(tail, head, 15);
    print(head);
     cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    cout << endl;
    
    insertAtPosition(tail, head, 3, 14);
    print(head);
     cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    cout << endl;
    
    deleteNode(head, tail, 5);
    print(head);
     cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    cout << endl;
    return 0;
}