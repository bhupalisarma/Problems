class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max_count = INT_MIN;
        for(auto x:nums){
            if(x==1)
            {
               
                 count++;
            }
            else{
                max_count = max(max_count,count);
                count=0;
            }
        }
        return  max(max_count,count);
    }
};