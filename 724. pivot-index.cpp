//calculate sum of full array then calculate some of left side should be half of complete sum.

// class Solution {
// public:
    
//     int pivotIndex(vector<int>& nums) {
        
//         int total = 0;
//         for (int num : nums) total += num;
//         int sum = 0;
//         for (int i = 0; i < nums.size(); sum += nums[i++])
//             if (sum * 2 == total - nums[i])
//                 return i;
        
//         return -1;
//     }
// };