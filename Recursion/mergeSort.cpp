#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = s + (e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *array1 = new int[len1];
    int *array2 = new int[len2];

    //copy from s to mid (left part)
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++) {
        array1[i] = arr[mainArrayIndex++];
    }

    //copy from mid to e (right part)
    mainArrayIndex = mid+1;
    for(int i = 0; i < len2; i++) {
        array2[i] = arr[mainArrayIndex++];
    }

    //merge the sorted arrays
    mainArrayIndex = s;
    int index1 = 0;
    int index2 = 0;

    while(index1 < len1 && index2 < len2) {
        if(array1[index1] < array2[index2]) {
            arr[mainArrayIndex++] = array1[index1++]; 
        }
        else {
            arr[mainArrayIndex++] = array2[index2++]; 
        }
    }

    while(index1 < len1) {
        arr[mainArrayIndex++] = array1[index1++]; 
    }

    while (index2 < len2) {
        arr[mainArrayIndex++] = array2[index2++];
    }



}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }

    int mid = s+(e-s)/2;

    //sort left part
    mergeSort(arr, s, mid);

    //sort right part
    mergeSort(arr, mid+1, e);

    //merge the arrays
    merge(arr, s, e);
}

int main()
{

    int arr[] = {2,5,8,1,6,4};
    int n = 6;

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}