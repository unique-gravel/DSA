#include <iostream>
using namespace std;

int fibonnaci(int n) {
    if(n == 1) {
        return 0;
    }

    else if(n == 2) {
        return 1;
    }

    else {
        return fibonnaci(n-1) + fibonnaci(n-2);
    }
}

int main()
{

    int ans = fibonnaci(8); // 8th term in the series

    cout << ans << endl;
    return 0;
}