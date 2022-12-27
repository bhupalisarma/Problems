// class Solution {
// public:
//     int smallestRangeII(vector<int>& nums, int k) {
//         int n = nums.size();
//         for(int i = 0;i<=nums.size();i++){
//             if(nums[i]<=k){
//                 nums[i]=nums[i]+k;
//             }
//             else {
//                 nums[i]=nums[i]-k;
//             }
//         }
//         sort(nums.begin(),nums.end());
//         int res = nums[n-1] - nums[0];
//         return res;
//     }
// };

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int diff=nums[n-1]-nums[0];
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=1;i<n;i++){
            maxi=max(nums[i-1]+k,nums[n-1]-k);
            mini=min(nums[0]+k,nums[i]-k);
            diff=min(diff,maxi-mini);
        }
        return diff;    
    }
};