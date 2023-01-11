#include <iostream>
using namespace std;

// parent class -> child class -> child class
class Animal {

    public:
    int age;
    int weight;

    public:
    void speak() {
        cout << "speaking" << endl;
    }

};

class Dog : public Animal {

};

class GermanShephard : public Dog {

};

int main()
{
    GermanShephard g;
    g.speak();
    
    return 0;
}