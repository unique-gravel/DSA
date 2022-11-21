//find pivot element and find target is n which side of pivot and apply binary search.

#include <iostream>
#include<vector>
using namespace std;

int findPivot(int arr[], int size) {
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}


int binarySearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    // int ans = -1;
    while (start<=end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end-start)/2;       
    }
    return -1;
}



int main() {
    int arr[7] = {4,5,6,7,0,1,2};
    int target = 5;
    int pivot = findPivot(arr, 7);
    if (target == pivot)
    {
        return pivot;
    }
    else if (target >= arr[pivot] && target <= arr[6])
    {
        int ans = binarySearch(arr, pivot, 6, target);
        cout<<"element is at index: " << ans<<endl;
    }
    else
    {
        int ans = binarySearch(arr, 0, pivot-1, target);
        cout<<"element is at: "<<ans<<endl;
    }
    
    
    
}