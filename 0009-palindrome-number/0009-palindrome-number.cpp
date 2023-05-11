class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0) return false;
        int ans=0,x=n;
        while(n)
        {
            if((ans>INT_MAX/10)) return false;
            ans=(ans*10)+(n%10);
            n/=10;
        } 
        return ans==x;
    }
};