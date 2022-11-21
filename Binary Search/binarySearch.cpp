#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    // int mid = (start + end)/2;
    int mid = (start)/2 + (end)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = (start)/2 + (end)/2;
        
    }
    return -1;
}

int main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {2,4,6,8,12};

    // int index = binarySearch(even, 6, 20);
    // cout<<"The index of 20 is: " << index << endl;
    int index = binarySearch(odd, 5, 20);
    cout<<"The index of 8 is: " << index << endl;

    
    
    return 0;
}