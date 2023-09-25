class Solution {
public:
    int dp[1001][1001];
    int solve(string &s,string &t,int i,int j,int m,int n){
        if(i==m || j==n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j]=1+solve(s,t,i+1,j+1,m,n);
        else return dp[i][j]=max(solve(s,t,i+1,j,m,n),solve(s,t,i,j+1,m,n));
    }
    int longestPalindromeSubseq(string s) {
        memset(dp,-1,sizeof(dp));
        string t=s;
        reverse(t.begin(),t.end());
        return solve(s,t,0,0,s.length(),t.length());
    }
};
