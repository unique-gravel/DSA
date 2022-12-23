#include <iostream>
#include <vector>
using namespace std;

int firstOcc(int arr[], int s, int e, int key, int ans) {
    
    if (s > e) {
        return ans;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key) {
        ans = mid;
        return firstOcc(arr, s, mid-1, key, ans);
    }

    else if(key > arr[mid]) {
        return firstOcc(arr, mid+1, e, key, ans);
    }

    else if(key < arr[mid]) {
        return firstOcc(arr, s, mid-1, key, ans);
    }
}

int lastOcc(int arr[], int s, int e, int key, int ans) {

    if(s > e) {
        return ans;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key) {
        ans = mid;
        return lastOcc(arr, mid+1, e, key, ans);
    }

    else if(key > arr[mid]) {
        return lastOcc(arr, mid+1, e, key, ans);
    }

    else if(key < arr[mid]) {
        return lastOcc(arr, s, mid-1, key, ans);
    }
}

int main()
{
    int arr[] = {1,1,2,3,4,5,5,5,6,6,7,7,8,9};
    
    int size = 14;
    int s = 0;
    int e = size-1; 

    int key = 5;


    vector<int> ans;
    int x = -1;
    int a;

    //first occurence
    a = firstOcc(arr, s, e, key, x);
    ans.push_back(a);

    //last occurence
    a = lastOcc(arr, s, e, key, x);
    ans.push_back(a);


    for(auto i : ans) {
        cout << i << " ";
    }

    cout << endl;
    
    return 0;
}