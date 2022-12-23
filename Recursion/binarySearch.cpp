#include <iostream>
using namespace std;

bool binarySearch (int arr[], int s, int e, int key) {

    // element not found
    if(s > e) {
        return false;
    }


    int mid = s + (e-s)/2;
    
    //element found
    if(key == arr[mid]) {
        return true;
    }

    else if(key > arr[mid]) {
        return binarySearch(arr, mid+1, e, key);
    }
    
    else if(key < arr[mid]) {
        return binarySearch(arr, s, mid-1, key);
    }
    
}

int main()
{
    int arr[] = {2,5,6,8,9};
    int size = 5;
    int key = 10;
    cout << binarySearch(arr, 0, size-1, key);
    
    return 0;
}