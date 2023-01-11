#include <iostream>
using namespace std;

//hybrid inheritance means using combination of two or more types of inheritance

class A {

};

class D {

};

class B : public A {

};


class C : public A {

};

class E : public A, public D {

};

int main()
{

    
    return 0;
}