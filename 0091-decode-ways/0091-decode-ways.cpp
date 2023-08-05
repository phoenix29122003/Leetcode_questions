class Solution {
public:
    int dp[101];
    int solve(string s,int idx,int n){
        if(idx>n) return 0;
        else if(idx==n) return 1;
        else if(dp[idx]!=-1) return dp[idx];
        int ans=0;
        if(s[idx]>='1' && s[idx]<='9') ans+=solve(s,idx+1,n);
        if((s[idx]=='1' && (s[idx+1]>='0' && s[idx+1]<='9'))||(s[idx]=='2' && (s[idx+1]>='0' && s[idx+1]<='6'))) ans+=solve(s,idx+2,n);
        return dp[idx]=ans;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(s,0,s.length());
    }
};