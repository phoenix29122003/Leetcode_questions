class Solution {
public:
    int solve(string w1,string w2,int m,int n,vector<vector<int>>&dp)
    {
        if(m==0) return dp[m][n]=n;
        if(n==0) return dp[m][n]=m;
        if(dp[m][n]!=-1) return dp[m][n];
        if(w1[m-1]==w2[n-1]) return dp[m][n]=solve(w1,w2,m-1,n-1,dp);
        else
        {
            return dp[m][n]=1+min({solve(w1,w2,m-1,n-1,dp),solve(w1,w2,m-1,n,dp),solve(w1,w2,m,n-1,dp)});
        }
    }
    int minDistance(string word1,string word2) {
        vector<vector<int>>dp(word1.length()+1,vector<int>(word2.length()+1,-1));
        return solve(word1,word2,word1.length(),word2.length(),dp);
    }
};