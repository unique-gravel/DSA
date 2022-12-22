#include <iostream>
using namespace std;

int sum(int arr[], int n, int s) {

    if(n == 1) {
        return s+arr[0];
    }

    s = s+arr[0]; //add the starting element in the sum
    return sum(arr+1, n-1, s); //call the function with the 0th element removed

}

int main()
{
    int arr[] = {2,3,5,6,9,8};

    int s = 0;
    int ans = sum(arr,6,s);

    cout << ans << endl; 
    
    return 0;
}