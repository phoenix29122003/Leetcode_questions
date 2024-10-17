class Solution {
public:
    int solve(string &s,string &t,int i,int j,int m,int n,vector<vector<int>>&dp){
        if(i==m && j==n) return 0;
        if(i==m) return n-j;
        if(j==n) return m-i;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j]=solve(s,t,i+1,j+1,m,n,dp);
        else return dp[i][j]=1+min(solve(s,t,i+1,j,m,n,dp),min(solve(s,t,i,j+1,m,n,dp),solve(s,t,i+1,j+1,m,n,dp)));
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size(),vector<int>(word2.size(),-1));
        return solve(word1,word2,0,0,word1.size(),word2.size(),dp);
    }
};