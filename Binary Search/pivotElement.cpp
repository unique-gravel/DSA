// a sortde array which is rotated, find the minimum element.

#include <iostream>
using namespace std;

int pivotElement(int arr[], int n){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if(arr[mid] > arr[0]) {
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    int arr[6] =  {3,7,18,21,1,2};
    int ans = pivotElement(arr, 6);
    cout<<"the pivot element is: "<<ans<<endl;

    
    return 0;
}