class Solution {
public:
    bool isSorted(string &s1,string&s2,unordered_map<char,int> &mp){
        int n = s2.length()<s1.length()?s1.length():s2.length();
        int i = 0;
        while(i<n){
            if(!mp[s1[i]] && mp[s1[i]]) return true;  // if s1 has no more chars and s2 has , then for sure s1 will be lexographically smaller than s2 therfoe true;
            else if(mp[s1[i]] && !mp[s2[i]] ) return false; // if s2 has no more chars and s1 has, then s2 will be lexographically smaller than s1 therefore false;
            else if(mp[s1[i]]<mp[s2[i]]) return true;
            else if(mp[s1[i]]==mp[s2[i]]) i++;// if both chars of s1 and s2 are equal then we will check for next elements.
            else return false;
        }
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>mp;
        int n = words.size();
        int i = 1;
        for(auto it : order){  // storing order in map
            mp[it]  = i;
            i++;
        }
        for(int i = 0;i<n-1;i++){
            if(!isSorted(words[i],words[i+1],mp)){  // function call
                return false;
            }
        }
        return true;
    }
};