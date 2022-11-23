#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 1; i < n; i++) {

            // from round 1 to n-1;
            for(int j = 0; j < n-i; j++) {

                //process every element till n-i th index
                if(nums[j]>nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                }
            }
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