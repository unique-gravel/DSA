#include <iostream>
using namespace std;

//head recursion -> first decrease the value then print (ascending order)
void headCounting(int n) {
    if(n == 0) {
        return ;
    }
    headCounting(n-1);
    cout<< n << endl;
}

//tail recursion -> first print the value then decrease (descending order)
void tailCounting(int n) {
    if(n == 0) {
        return ;
    }
    cout<< n << endl;
    tailCounting(n-1);
}

int main()
{
    headCounting(5);
    cout << endl;
    tailCounting(5);
    
    return 0;
}