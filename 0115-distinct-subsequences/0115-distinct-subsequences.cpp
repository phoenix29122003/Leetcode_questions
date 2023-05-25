class Solution {
public:
    int solve(string s,string t,int i,int j,int m,int n,vector<vector<int>>&dp)
    {
        if(j==n) return 1;
        if(i==m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j]=solve(s,t,i+1,j+1,m,n,dp)+solve(s,t,i+1,j,m,n,dp);
        else return dp[i][j]=solve(s,t,i+1,j,m,n,dp);
    }
    int numDistinct(string s, string t) {
        int m=s.length(),n=t.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(s,t,0,0,m,n,dp);
    }
};