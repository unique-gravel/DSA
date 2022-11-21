// append array from 0 to n in a new array then apply binary search approachto calculate square of mid is < or > n.

#include <iostream>
using namespace std;

int sqrt(int n) {
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    
    //applying binary search
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans;
    int sq;
    while (s <= e)
    {
        if (arr[mid]*arr[mid] == n)
        {
            ans = mid;
            break;
        }

        else if (arr[mid]*arr[mid] < n)
        {
            ans = mid; // possible solution in decimal form
            s = mid+1;
        }

        else if (arr[mid]*arr[mid] > n)
        {
            e = mid-1;
        }
        mid = s + (e-s)/2;        
    }
    return ans;
}

int main()
{
    int n = 27;
    int ans = sqrt(n);
    cout<<ans;
    
    return 0;
}