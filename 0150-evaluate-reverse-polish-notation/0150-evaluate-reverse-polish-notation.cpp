class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<long long> st;
        for(int i = 0;i<token.size();i++){
            if(token[i]=="+" || token[i]=="-" || token[i]=="*" || token[i]=="/"){
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                if(token[i]=="+"){
                    st.push(b+a);
                }
                else if(token[i]=="-"){
                    st.push(b-a);
                }
                else if(token[i]=="*"){
                    st.push(b*a);
                }
                else{
                    st.push(b/a);
                }
            }
            else{
                st.push(stoi(token[i]));
            }
        }
        return st.top();
    }
};