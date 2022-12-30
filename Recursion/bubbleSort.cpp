#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArray(vector<int> nums, int n) {

    if(n == 0) {
        return nums;
    }
    
    // sort the last element of the array
    for(int i = 0; i < n-1; i++) {
        if(nums[i+1] < nums[i]) {
            swap(nums[i+1], nums[i]);
        }
    }

    //pass the array by removing the last element coz its sorted
    return sortArray(nums, n-1);   
}

int main()
{
    vector<int> v{2,5,9,1,6,3,8,7,4};
    vector<int> result;
    int size = v.size();
    result = sortArray(v, size);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}