#include <iostream>
using namespace std;


//more than 1 childd class from a single parent class (like family treee structure)
class A {
    public:
    void func1() {
        cout << "Inside function 1" << endl;
    }
};

class B : public A {
    public:
    void func2() {
        cout << "Inside function 2" << endl;
    }
};

class C : public A {
    public:
    void func3() {
        cout << "Inside function 3" << endl;
    }
};

int main()
{
    cout << "For class A" << endl;
    A obj1;
    obj1.func1();

    cout << "For class B" << endl;
    B obj2;
    obj2.func1();
    obj2.func2();
    
    cout << "For class C" << endl;
    C obj3;
    obj3.func1();
    obj3.func3();
    
    return 0;
}