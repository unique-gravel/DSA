//binary search on the solution space

#include <iostream>
#include<vector>
using namespace std;

bool isSolution(vector<int>& arr, int n, int mid, int k) {
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++) {
        // add the number of pages for student 1
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else{
            //change the student to student 2
            studentCount++;
            //if students are finished
            if(studentCount > k || arr[i] > mid) {
                return false;
            }
            //if students are left
            pageSum = 0; //assign to student 2 and onwards
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

    // calculating solution space (s se lekar e tk)
    int s = 0, e = sum;
    int ans = -1;
    int mid = s+ (e-s)/2;
    while(s <= e) {
        //check if mid is a possible solution
        if(isSolution(nums, n, mid ,k)) {
            ans = mid;
            //if yes shift e to find minimum solution
            e = mid-1;
        }
        else {
            // shift s to calculate a bigger value of mid
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