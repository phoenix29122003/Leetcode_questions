class Solution {
public:
    int dp[2001];
    bool isPalindrome(string& s, int l, int r) {
        while (l<r) {
            if (s[l++]!=s[r--]) return false;
        }
        return true;
    }
    int recur(int idx , int n , string &s){
        if(idx>=n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        if(isPalindrome(s,idx,n)) return dp[idx]=0;
        int mi=INT_MAX;        
        for (int i=idx;i<n;i++) 
        {  
            if(isPalindrome(s,idx,i)) mi=min(mi,1+recur(i+1,n,s));
        }
        return dp[idx]=mi;    
    }
    int minCut(string s) {
        int n=s.size();
        memset(dp,-1,sizeof dp);
        return recur(0,n-1,s);
    }
};