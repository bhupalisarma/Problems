class Solution {
public:
    int findPeakElement(vector<int>& nums) {
//         int n = nums.size();
//         int low = 0;
//         int high = n-1;
//         int mid = (low+high)/2;
        
//         while(low<high){
//             if (nums[mid]==nums[mid+1]) low = mid;
//             else
//         }
        
       
        int i=0, j=nums.size()-1, mid;
        while(i<j){
            mid=(i+j)/2;
            if(nums[mid]>nums[mid+1])j=mid;
            else i=mid+1;
        }
        return i;
    }
    
};