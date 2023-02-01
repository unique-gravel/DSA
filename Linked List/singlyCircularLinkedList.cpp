#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next == NULL) {
            delete next;
            next = NULL;
        }

        cout << "node with value " << value << " deleted" << endl;
    }
};

void insertAtHead(Node* &tail, int element, int d) {
    //empty list
    if(tail == NULL) {
        Node* insert = new Node(d);
        tail = insert;
        insert -> next = insert;
    }

    //list is not empty
    else {
        Node* current = tail;

        //traverse till the element is not found
        while(current->data != element) {
            current = current->next;
        }

        //element is found
        Node* insert = new Node(d);
        insert->next = current->next;
        current->next = insert;


    }
}

void deleteNode(Node* &tail, int value) {
    if(tail == NULL) {
        cout << "Please check again" << endl;
    }

    else {
        Node* prev = tail;
        Node* current = prev->next;

        while (current->data != value)
        {
            prev = current;
            current = current->next;
        }

        prev->next = current->next;
        if(tail == current) {
            tail = prev;
        }
        current->next = NULL;
        delete current;
        
    }
}

void print(Node* &tail) {
    Node* temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    
    cout << endl;

}

int main()
{   
    Node* tail = NULL;

    insertAtHead(tail, 5, 3);
    print(tail);
    
    insertAtHead(tail, 3, 5);
    print(tail);

    insertAtHead(tail, 5, 7);
    print(tail);

    insertAtHead(tail, 7, 9);
    print(tail);

    insertAtHead(tail, 5, 11);
    print(tail);

    insertAtHead(tail, 7, 13);
    print(tail);

    deleteNode(tail, 11);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    
    return 0;
}