// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int> v;
//         int n = nums.size();
//         int c = v.size();
        
//         for(int i = 0; i<n;i++){
//             if(nums[i] !=0)  v.push_back(nums[i]);
//         }
//         for(int j = c;j<n;j++)  v.push_back(0);
        
//         nums = v;
//     }
// };


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                v.push_back(nums[i]);
            }
        }
        for(int j=v.size();j<nums.size();j++){
            v.push_back(0);
        }
        nums=v;
    }
};