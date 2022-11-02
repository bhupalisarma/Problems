class Solution {
public:
    int repeatedNTimes(vector<int>& a) {
        int n=a.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[a[i]]++;
        for(auto i:mp)
        {
            if(i.second>= n/2)
                return i.first;
        }
        return 0;
    }
};