#include <iostream>
using namespace std;

class Animal {

    public:
    int age;
    int weight;

    public:
    void barking() {
        cout << "Barking"<<endl;
    }

};

class Human {
    public:
    string color;

    public:
    void speaking() {
        cout << "Speaking" << endl;
    }

};

//class with multiple inheritance (inherit from more than 1 class)
class Hybrid : public Animal, public Human {

};

int main()
{
    Hybrid obj1;
    obj1.barking();
    obj1.speaking();
    
    return 0;
}