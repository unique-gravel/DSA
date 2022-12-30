#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n-1; i++) {
            int minIndex = i;
            for(int j = i; j < n; j++) {
                if(nums[j]<nums[minIndex]) {
                    minIndex = j;
                }
            }
            swap(nums[minIndex], nums[i]);
        }
        return nums;
}

int main()
{
    vector<int> v{2,5,9,1,6,3};
    vector<int> result;
    result = sortArray(v);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}