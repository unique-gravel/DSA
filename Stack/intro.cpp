#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    //push operation
    s.push(5);
    s.push(4);

    //pop operation
    s.pop();

    //priting top element
    cout << "Top element : " << s.top() << endl;

    //checking empty
    if(s.empty()) {
        cout << "Stack is empty." << endl;
    }
    else {
        cout << "Stack is not empty." << endl;
    }
    
    return 0;
}