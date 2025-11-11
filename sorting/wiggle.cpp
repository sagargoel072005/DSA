// class Solution {
// public:
//     void wiggleSort(vector<int>& nums) {

//         int n = nums.size();
//         vector<int> ans = nums;
//         sort(ans.begin(), ans.end());

//         int mid = (n + 1) / 2;
//         int j = mid - 1;
//         int k = n - 1;

//         for (int i = 0; i < nums.size(); i++) {

//             if (i % 2 == 0) {
//                 nums[i] = ans[j--];
//             } else {
//                 nums[i] = ans[k--];
//             }
//         }
//     }
// };