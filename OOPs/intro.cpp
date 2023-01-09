#include <iostream>
using namespace std;

class Hero {
    private:
    int health;
    char level;

    public:
    static int timeToComlete;

    //default constructor
    Hero() {
        cout << "Constructor called" << endl;
    }

    //parameterized constructor
    Hero(int health, char level) {
        this->health = health;
        this->level = level;
    }

    //copy constructor
    Hero(Hero& temp) { //pass by adress always
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //print function
    void print() {
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
    }

    void setHealth(int h) {
        health = h;
    }
    void setLevel(char l) {
        level = l;
    }
    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }

    //can access only static data member
    static int random() {
        return timeToComlete;
    }
};

int Hero::timeToComlete = 5;

int main()
{
    cout << Hero::timeToComlete << endl;
    cout << Hero::random() << endl;











    /*
    
    //understanding copy constructor
    Hero S(70, 'A');
    cout << "details of S: " << endl;
    S.print();

    Hero R(S); //copy constructor, copy S in R
    cout << "details of R3: " << endl;
    R.print();
    */







    /*
    //constructor
    Hero ramesh(10, 'A');
    ramesh.print();
    */









    
    /*
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('A');
    cout << "health is " << a.getHealth() << endl; 
    cout << "level is " << a.getLevel() << endl; 

    //dynamic allocation
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('B');
    cout << "health is " << b->getHealth() << endl; 
    cout << "level is " << b->getLevel() << endl; 
    */

    return 0;
}