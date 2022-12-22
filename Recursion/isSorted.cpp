#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    //n is the size of array

    if(n == 0 || n == 1) {
        return true;
    }

    if(arr[0] > arr[1]) {
        return false;
    }

    else {
        return isSorted(arr+1, n-1); //logically removing the starting element if it is sorted.
    }
}

int main()
{
    int arr[] = {2,3,5,6,9,8};

    bool ans = isSorted(arr,6);

    cout << ans << endl; 
    
    return 0;
}