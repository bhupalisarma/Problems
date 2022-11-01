class Solution {
public:
        vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> m;
        for(int i=0;i<names.size();i++) m[heights[i]]=names[i];
        vector<string> ans;
        for (auto x:m) ans.push_back(x.second);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};