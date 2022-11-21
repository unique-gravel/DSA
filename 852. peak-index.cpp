//check on which line in the graph does the mid lie and work accordingly

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int size = arr.size(); 
//         int s = 0;
//         int e = size-1;
//         int mid = s + (e-s)/2;
//         int ans = -1;
//         while(s < e ) {
//             if(arr[mid] < arr[mid+1]) {
//                 s = mid + 1; 
//             }
//             else {
//                 e = mid;
//             }
//             mid = s + (e-s)/2;
//         }
//         return s;
//     }
// };