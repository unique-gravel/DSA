#include <iostream>
using namespace std;

//method 1 -> using head recursion
void reverse(string name, int length, int i){
    if(i == length) {
        return ;
    }

    else {
        reverse(name, length , i+1);
        cout << name[i];
    }
}

//method 2 -> swap first and last values using two pointers
void reverse1(string& name, int i, int j) {
    if(i > j) {
        return ;
    }


    swap(name[i], name[j]);
    i++;
    j--;
    reverse1(name, i, j);
    
}

int main()
{

    string name = "ananya";
    int length = name.length();
    int i = 0;
    int j = length-1;

    //method 1
    // reverse(name, length, i);

    //method 2
    reverse1(name, i, j);
    cout << name << endl;
    
    return 0;
}