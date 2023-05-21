class Solution {
public:
    bool solve(string s,string p,int i,int j,int m,int n,vector<vector<int>>&dp)
    {
        if(j==n) return i==m;
        if(dp[i][j]!=-1) return dp[i][j];
        if(p[j]=='*') return dp[i][j]=solve(s,p,i,j+1,m,n,dp)||(i<m && solve(s,p,i+1,j,m,n,dp));
        if(i<m && (p[j]=='?' || s[i]==p[j])) return dp[i][j]=solve(s,p,i+1,j+1,m,n,dp);
        return dp[i][j]=0;
    }
    bool isMatch(string s, string p) {
        vector<vector<int>>dp(s.length()+1,vector<int>(p.length()+1,-1));
        return solve(s,p,0,0,s.length(),p.length(),dp);
    }
};