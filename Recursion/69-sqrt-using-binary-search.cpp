#include <iostream>
#include <vector>
using namespace std;

int sqrt(vector<int> arr, int s, int e, int n) {
    
    //sqrt does not exist
    if(s > e) {
        return -1;
    }

    int mid = s + (e-s)/2;

    if(arr[mid]*arr[mid] == n) {
        return arr[mid];
    }

    else if(arr[mid] * arr[mid] > n) {
        return sqrt(arr, s, mid-1, n);
    }

    else if(arr[mid] * arr[mid] < n) {
        return sqrt(arr, mid+1, e, n);
    }

}

int main()
{
    int n = 50;

    vector<int> space;
    for(int i = 1; i <= n; i++) {
        space.push_back(i);
    }

    int s = 0; 
    int e = space.size()-1;

    int ans = sqrt(space, s, e, n);

    cout << ans << endl;
    
    return 0;
}