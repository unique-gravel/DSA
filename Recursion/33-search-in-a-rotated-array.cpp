#include <iostream>
using namespace std;

int findPivot(int arr[], int s, int e) {
    
    if (s >= e) {
        return s;
    }

    int mid = s + (e-s)/2;
    
    if(arr[mid] >= arr[0]) {
        return findPivot(arr, mid+1, e);
    }

    else {
        return findPivot(arr, s, mid);
    }
}

int binarySearch(int arr[], int s, int e, int key) {
    
    //element not found
    if(s > e) {
        return -1;
    }

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == key) {
        return mid;
    }

    if(key > arr[mid]) {
        return binarySearch(arr, mid+1, e, key);
    }

    if(key < arr[mid]) {
        return binarySearch(arr, s, mid-1, key);
    }
}

int main()
{   

    int arr[] = {6,7,8,9,1,4};
    int size = 6;
    int key = 1;

    int s = 0;
    int e = size-1;
    int pivot = findPivot(arr,s,e);

    // cout << pivot << endl;
    if(key == arr[pivot]) {
        cout <<  pivot << endl;
    }

    //key on first line
    else if(key >= pivot && key <= arr[5]) {
        cout << binarySearch(arr, pivot, 5, key) << endl;
    }

    //key on second line
    else { 
        cout << binarySearch(arr, 0, pivot-1, key) << endl;
    }

    
    return 0;
}