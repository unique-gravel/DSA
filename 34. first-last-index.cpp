// //leetcode solution

//  calculate first occurence and last occurence separately using binary search.

// class Solution {
// public:
//     int firstOcc(vector<int>& arr, int key) {
//         int s = 0;
//         int size = arr.size();

//         int e = size-1;
//         int ans = -1;
//         int mid = s+(e-s)/2;
//         while (s<=e)
//         {
//             if (arr[mid] == key)
//             {
//                 ans = mid;
//                 e = mid-1;
//             }
//             else if (arr[mid] > key)
//             {
//                 e = mid -1;
//             }
//             else if (arr[mid] < key)
//             {
//                 s = mid + 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;
    
//     }
    
//     int lastOcc(vector<int>& arr, int key) {
//         int s = 0;
//             int size = arr.size();

//         int e = size-1;
//         int ans = -1;
//         int mid = s+(e-s)/2;
//         while (s<=e)
//         {
//             if (arr[mid] == key)
//             {
//                 ans = mid;
//                 s = mid+1;
//             }
//             else if (arr[mid] > key)
//             {
//                 e = mid -1;
//             }
//             else if (arr[mid] < key)
//             {
//                 s = mid + 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;
    
//     }
    
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> result;
//         int ans = firstOcc(nums, target);
//         result.push_back(ans);
//         ans = lastOcc(nums, target);
//         result.push_back(ans);
//         return result;
//     }
// };