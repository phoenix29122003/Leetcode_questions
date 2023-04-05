class Solution {
public:
    int dp[102];
    int solve(int idx,string s,int n)
    {
        if(idx>=n) return 1;
        if(idx<n && s[idx]=='0') return 0;
        if(dp[idx]!=-1) return dp[idx];
        int ways=0;
        if(s[idx]!='0') ways+=solve(idx+1,s,n);
        if(idx+1<n && ((s[idx]=='1' && s[idx+1]<='9')||(s[idx]=='2' && s[idx+1]<='6'))) ways+=solve(idx+2,s,n);
        return dp[idx]=ways;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(0,s,s.length());
    }
};