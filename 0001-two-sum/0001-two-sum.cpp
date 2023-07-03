class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Create a new vector with pairs instead of just values.
        vector<pair<int, int>> pairs;
        
        for (int index = 0; index < nums.size(); index++){
            pairs.push_back({nums[index], index});
        }
        
        //Sort the vector.
        sort(pairs.begin(), pairs.end());
        
        //Initialise left & right pointers.
        int left = 0;
        int right = nums.size()-1;
        
        //While left < right.
        while(left < right){
            //If the total of nums[left] and nums[right] == target return left and right
            if (pairs[left].first + pairs[right].first == target){
                return {pairs[right].second, pairs[left].second};
            }
            //If the total of nums[left] and nums[right] < target left++ to make total bigger.
            if (pairs[left].first + pairs[right].first < target){
                left++;
            }
            //If the total of nums[left] and nums[right] > target right-- to make total smaller.
            else{
                right--;
            }
        }
        //If there is no solution return an empty array.
        return {};
    }   
};