class Solution {
public:
    int dp[1001][1001];
    int solve(string &s, string &t,int i,int j,int m,int n){
        if(j==n) return 1;
        if(i==m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j]=solve(s,t,i+1,j+1,m,n)+solve(s,t,i+1,j,m,n);
        else return dp[i][j]=solve(s,t,i+1,j,m,n);
    }
    int numDistinct(string s, string t) {
        memset(dp,-1,sizeof(dp));
        return solve(s,t,0,0,s.length(),t.length());
    }
};