// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) {
        
//         for(int i = 0; i<= nums.size();i++){
//             while(nums[0] < nums[1]){
//                 if (nums[i] > nums [i+1]) {
//                     return false;
//                 }
//                 return true;
//             }
//             if(nums[i]<nums[i+1]){
//                 return false;
//             }  
//         }
//          return true;
//     }
// };

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int n = nums.size() ;
        int count = 1 ,flag = 1;
        
        for (int i=1; i<n; i++)
        {
            if (nums[i-1]<=nums[i])
            {
                count++ ;
            }
        }
        
        for (int i=1; i<n; i++)
        {
            if (nums[i-1]>=nums[i])
            {
                flag++ ;
            }
        }
        
        
        if (count==n || flag==n)
            return true ;
        else 
            return false ;
        
    }
};