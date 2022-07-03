class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i-1];
                j++;
            }
            if(i==nums.size()-1){
                nums[j]=nums[i];
                
            }
        }
        return j+1;
    }
};