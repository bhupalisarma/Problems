class Solution {
public:
    bool isPalindrome(int x) {
    int original_num=x;
    if(x<0)
        return false;
    long long rev=0;
    while(x>0)
    {
        int rem=x%10;
        rev=rev*10+rem;
        x/=10;
     }
    if(rev==original_num)
        return true;
    return false;
    
    }
};

// {
//     int original_num=x;
//     if(x<0)
//         return false;
//     long long rev=0;
//     while(x>0)
//     {
//         int rem=x%10;
//         rev=rev*10+rem;
//         x/=10;
//      }
//     if(rev==original_num)
//         return true;
//     return false;
    
// }