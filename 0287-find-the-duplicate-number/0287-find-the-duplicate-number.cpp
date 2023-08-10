// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int slow=nums[0];
//         int fast=nums[0];
        
//         do{
//             slow=nums[slow];
//             fast=nums[nums[fast]];
//         } while(slow!=fast);
        
//         fast=nums[0];
//         while(slow!=fast){
//             slow=nums[slow];
//             fast=nums[fast];
//         }
//         return slow;
//     }
// };

class Solution {
public:
    int findDuplicate(vector<int>& v) {
        
        int n = v.size();
        int ans = 0;
        
        unordered_map<int,int>cnt;
        
        for(int i=0;i<n;i++){
            cnt[v[i]]++;
        }
        
        for(int i=0;i<n+5;i++){
            if(cnt[i]>1){
                ans=i;
            }
        }
        
        return ans;
    }
};