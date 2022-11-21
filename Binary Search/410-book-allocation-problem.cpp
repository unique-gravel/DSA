#include <iostream>
#include<vector>
using namespace std;

bool isSolution(vector<int>& arr, int n, int mid, int k) {
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > k || arr[i] > mid) {
                return false;
            }
            pageSum = 0;
            pageSum += arr[i];
        }
    }
    return true;
}
    
int splitArray(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += nums[i];
    }
    int s = 0, e = sum;
    int ans = -1;
    int mid = s+ (e-s)/2;
    while(s <= e) {
        if(isSolution(nums, n, mid ,k)) {
            ans = mid;
            e = mid-1;
        }
        else {
            s = mid+1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}

int main()
{
    vector<int> arr{1,2,3,4,5};
    int k = 2;
    cout<<"Answer: "<< splitArray(arr, k);
    
    return 0;
}