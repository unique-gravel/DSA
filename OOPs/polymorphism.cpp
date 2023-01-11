#include <iostream>
using namespace std;

//to use a function of same name in different forms, you must change the inout parameter
//changing the return type will not do anything
class A {
    public:
    void sayHello() {
        cout << "Hello Ananya Agrawal" << endl;
    }
    void sayHello(string name) {
        cout << "Hello " << name << endl;
    }
    void sayHello(int n) {
        cout << "Hello Ananya Agrawal "  << n << endl;
    }
};

int main()
{
    A obj;
    obj.sayHello(1);
    
    return 0;
}