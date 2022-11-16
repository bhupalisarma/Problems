class Solution {
public:
    bool isPalindrome(int x) {
    int n=x;
    if(x<0) return false;
    long long reverse=0;
    while(x>0)
    {
        int remainder=x%10;
        reverse=reverse*10+remainder;
        x=x/=10;
     }
    if(reverse==n) return true;
    return false;
    
    }
};

