class Solution {
public:
    int mod = 1e9+7;

    int sumSubarrayMins(vector<int>& a) {
        int n = (a).size();
        
        stack<int> st;
        vector<int> ans(n,0);
        
        for(int i=0;i < n;i++){
            while(!st.empty() && a[st.top()] > a[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = (i+1)*a[i];
                ans[i] %= mod;
            }else{
                ans[i] = (i-st.top())*a[i];
                ans[i] %= mod;
                ans[i] += (ans[st.top()]);
                ans[i] %= mod;
            }
            st.push(i);
        }
        
        long res = 0;
        for(auto i:ans){
            res += i;
            res %= mod;
        }
        
        return res;
    }
};