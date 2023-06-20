#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node (int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {

    //create new node
    Node * temp = new Node(d);

    //point towards previous node
    temp -> next = head;

    //point head on start
    head = temp;
}

void insertAtTail(Node* &head, int d) {

    //create a new node to traverse till the last node
    Node* temp = head;
    //traverse till the last node
    while (temp->next != NULL) {
        temp =  temp->next;
    }

    //create another node
    Node* insert = new Node(d);
    //point the last node to the new node
    temp->next = insert;
    //point the next of new node to null
    insert->next = NULL;
    
}

void insertAtPosition(Node* &head, int position, int d) {
    //insert at head case, since we start at head, so we cannot insert at first position by this function so create seperate case
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    //node for traversing
    Node* temp = head;
    int cnt = 1; //denoting the position we are currently at starting from head so cnt = 1

    while (cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //insert at tail case 
    if(temp->next == NULL) {
        insertAtTail(head, d);
        return;
    }


    //create a new node to insert
    Node* insert =  new Node(d);
    //insert ke next m uske agle waala node daaldo
    insert->next = temp->next;
    //temp ke next to inserted node pe point karado
    temp->next = insert;
    
}

void deletNode(Node* &head, int position) {

    //deleting first node
    if(position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else {

        //deleting middle or last node
        //temp node to traverse hrough the linked list
        Node* current = head;
        Node* prev = NULL;
        int count = 1;
        
        while (count < position)
        {   
            prev = current;
            current = current->next;
            count++;
        }
        
        prev->next = current->next;
        current->next = NULL;
        delete current;
        
    }
    
}

void print (Node* &head) {

    //create new temp node pointing at start to traverse the linked list
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int length(Node* head) {
    
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }

    return len;
}

int main()
{
    Node* node1 = new Node(10);
    print(node1);

    insertAtHead(node1, 15);
    print(node1);
    
    insertAtHead(node1, 12);
    print(node1);
    
    insertAtTail(node1, 20);
    print(node1);
    
    insertAtPosition(node1, 3, 25);
    print(node1);
    
    insertAtPosition(node1, 6, 30);
    print(node1);

    deletNode(node1, 3);
    print(node1);
    
    int len = length(node1);
    
    cout << len;

    return 0;
}