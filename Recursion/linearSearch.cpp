#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key, int index) {

    if(n == 0) {
        return false;
    }

    if(arr[0] == key) {
        return index;
    }

    index++;
    return linearSearch(arr+1, n-1, key, index);

}

int main()
{
    int arr[] = {2,3,5,6,9,8};

    int key = 1;
    int index = 0;
    int ans = linearSearch(arr,6,key, index);

    cout << ans << endl; 
    
    return 0;
}