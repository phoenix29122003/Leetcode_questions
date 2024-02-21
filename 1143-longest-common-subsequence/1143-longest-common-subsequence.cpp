class Solution {
public:
    int dp[1001][1001];
    int solve(string &s,string &p,int i,int j,int m,int n){
        if(i==m || j==n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==p[j]) return dp[i][j]=1+solve(s,p,i+1,j+1,m,n);
        else return dp[i][j]=max(solve(s,p,i+1,j,m,n),solve(s,p,i,j+1,m,n));
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return solve(text1,text2,0,0,text1.size(),text2.size());
    }
};