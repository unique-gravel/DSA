#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArray(vector<int>& nums) {
    int n = nums.size();
    for(int i = 1; i < n; i++) {
        int temp = nums[i]; 
        int j = i-1;
        while(j >= 0) {
            if(nums[j] > temp) {

                //shift
                nums[j+1] = nums[j]; 
                j--;
            }
            else {
                break;
            }
        }
        nums[j+1] = temp;
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