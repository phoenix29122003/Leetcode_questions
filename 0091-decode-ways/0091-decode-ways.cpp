class Solution {
public:
    int solve(string s,int idx,int n,vector<int>&dp){
        if(idx==n) return 1;
        if(idx>n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int cnt=0;
        if('1'<=s[idx] && s[idx]<='9') cnt+=solve(s,idx+1,n,dp);
        if(idx+1<n && (s[idx]=='1' && ('0'<=s[idx+1] && s[idx+1]<='9')) || (s[idx]=='2' && ('0'<=s[idx+1] && s[idx+1]<='6'))) cnt+=solve(s,idx+2,n,dp);
        return dp[idx]=cnt;
    }
    int numDecodings(string s) {
        vector<int>dp(s.length()+1,-1);
        return solve(s,0,s.length(),dp);
    }
};