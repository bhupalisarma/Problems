class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size()<=1) return intervals; //base case
        
        vector<vector<int>> result; //resultant vector
        
        sort(intervals.begin(),intervals.end()); //takes O(nlogn) time
        
        result.push_back(intervals[0]); //insert the the the first interval in the result
        
        for(int i=1; i<intervals.size(); i++) {
            if(result.back()[1] >= intervals[i][0]) {
                result.back()[1] = max(result.back()[1] , intervals[i][1]);  //intevals are overlapping
            }
            else 
                result.push_back(intervals[i]); //they are not overlapping
        }
        return result;
    }
};