#include <iostream>
using namespace std;

class Stack{
    public:

    //properties
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data) {
        if(size-top > 1) {
            top++;
            arr[top] = data;
        }
        else {
            cout <<"Stack overflow" << endl;
        }
    }
    void pop() {
        if(top>=0) {
            top--;
        }
        else {

            cout << "Stack Underflow" << endl;
        }
    }
    int peek() {
        if(top >= 0) {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty() {
        if(top >= 0) {
            return false;
        }
        else {
            return true;
        }
    }

};

int main()
{
    Stack s(5);

    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);

    cout << s.peek() << endl;

    s.pop();
    cout << s.peek() << endl;
   
    s.pop();
    cout << s.peek() << endl;
    
    if(s.isEmpty()) {
        cout << "Stack is empty";
    }
    else {
        cout << "Stack is not empty";
    }

    
    return 0;
}