#include <iostream>
using namespace std;

class Human {

    public:
    int height;
    int weight;
    int age;

    void setAge(int age) {
        this->age = age;
    }
    void setHeight(int h) {
        this->height = h;
    }
    void setWeight(int w) {
        this->weight = w;
    }
};

class Male : public Human {

    public:
    string color;

    void sleeping() {
        cout << "Male sleeping" << endl;
    }
};

int main()
{
    Male ramesh;
    ramesh.setAge(20);
    ramesh.setHeight(163);
    ramesh.setWeight(80);

    cout << ramesh.height << endl;
    cout << ramesh.weight << endl;
    cout << ramesh.age << endl;
    ramesh.sleeping();

    
    return 0;
}