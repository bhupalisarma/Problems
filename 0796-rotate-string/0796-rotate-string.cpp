// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         if(s.length() != goal.length())
//         return false;
    
//         if((s+s).find(goal) == -1)
//             return false;
//         else 
//             return true;
//     }
// };



class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(n!=m)
        {
            return false;
        }
        string p=s+s;
        if(p.find(goal)!=string::npos)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};