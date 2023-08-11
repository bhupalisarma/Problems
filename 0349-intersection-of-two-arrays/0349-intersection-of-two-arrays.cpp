// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//       // put the values in set to remove duplicate
//         set<int>s1,s2;
//         vector<int>out;
//         for(auto val:nums1)
//             s1.insert(val);
//         for(auto val:nums2)
//             s2.insert(val);
        
//         //find if we can get the value from first set in second set
//         for(auto val:s1)
//         {
//            if(s2.find(val)!=s2.end()) //if found push it into output vector
//                out.push_back(val);
//         }
//         return out;
//     }
// };

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int>s1,s2;
        vector<int>output;
        
        for(auto it: nums1){
            s1.insert(it);
        }
        for(auto it: nums2){
            s2.insert(it);
        }
        
        for(auto it : s1){
            if(s2.find(it) != s2.end()){
                output.push_back(it);
            }
        }
        return output;
        
    }
};