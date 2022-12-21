#include <iostream>
using namespace std;

//power of 2
int power(int n) {
    if(n == 0) {
        return 1;
    }

    else {
        return 2*power(n-1);
    }
}

int main()
{
    cout<< power(4) << endl;
    
    return 0;
}