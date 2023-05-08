class Solution {
public:
    int solve(string s,int idx,vector<int>&dp)
    {
        if(idx>=s.length()) return 1;
        if(dp[idx]!=0) return dp[idx];
        if(idx<s.length() && s[idx]=='0') return 0;
        int ans=0;
        if(s[idx]>='1' && s[idx]<='9') ans+=solve(s,idx+1,dp);
        if(idx+1<s.length())
        {
            if((s[idx]=='1' && (s[idx+1]>='0' && s[idx+1]<='9') )||(s[idx]=='2' && (s[idx+1]>=0 && s[idx+1]<='6'))) ans+=solve(s,idx+2,dp);
        }
        return dp[idx]=ans;
    }
    int numDecodings(string s) {
        vector<int>dp(101,0);
        return solve(s,0,dp);
    }
};