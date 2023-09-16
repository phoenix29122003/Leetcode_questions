class Solution {
public:
    int dp[2001][2001];
    int solve(string s,string p,int i,int j,int m,int n){
        if(j==n) return i==m;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]!=p[j] && p[j]=='*') return dp[i][j]=solve(s,p,i,j+1,m,n)||(i<m && solve(s,p,i+1,j,m,n));
        if(i<m && (s[i]==p[j] || p[j]=='?')) return dp[i][j]=solve(s,p,i+1,j+1,m,n);
        return dp[i][j]=0;
    }
    bool isMatch(string s, string p) {
        memset(dp,-1,sizeof(dp));
        return solve(s,p,0,0,s.length(),p.length());
    }
};