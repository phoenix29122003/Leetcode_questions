class Solution {
public:
    int dp[1001][1001];
    int solve(string &s,string &t,int i,int j,int m,int n){
        if(dp[i][j]!=-1) return dp[i][j];
        if(i>=m && j>=n) return 0;
        if(j>=n) return dp[i][j]=s[i]+solve(s,t,i+1,j,m,n);
        if(i>=m) return dp[i][j]=t[j]+solve(s,t,i,j+1,m,n);
        if(s[i]==t[j]) return dp[i][j]=solve(s,t,i+1,j+1,m,n);
        else return dp[i][j]=min(s[i]+solve(s,t,i+1,j,m,n),t[j]+solve(s,t,i,j+1,m,n));
    }
    int minimumDeleteSum(string s, string t) {
        memset(dp,-1,sizeof(dp));
        return solve(s,t,0,0,s.length(),t.length());
    }
};