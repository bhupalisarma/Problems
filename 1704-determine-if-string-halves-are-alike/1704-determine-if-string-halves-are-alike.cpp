class Solution {
    public:
        bool halvesAreAlike(string s) {
            int c1 = 0, c2 = 0;
            int i = 0, j = s.size() - 1;
            string ch = "aeiouAEIOU";
            while(i < j){
                if(ch.find(s[i]) < ch.length()){
                c1++;
                }
                if(ch.find(s[j]) < ch.length()){
                c2++;
                }
                i++;
                j--;
            }
            return c1 == c2;
        }
    };