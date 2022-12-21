#include <iostream>
using namespace std;

void sayDigits(int n, string array[]) {

    if(n < 1) {
        return ;
    }

    int digit = n % 10;



    sayDigits(n/10, array);
    cout << array[digit] << " ";
}

int main()
{

    int n = 412;
    string array[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    sayDigits(n, array);
    
    return 0;
}