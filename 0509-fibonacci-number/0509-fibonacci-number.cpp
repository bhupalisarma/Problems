class Solution {
public:
    int fib(int x) {
        if(x==1 || x==0) {
            return(x);
        }
        else{
            return ((fib(x-1)+fib(x-2)));
        }        
    }
    
    int main(){
        int i = 0;
        int x = 5;
        
        while(i<x){
            cout<<fib(i);
            i++;
        }
        return 0;
    }
};