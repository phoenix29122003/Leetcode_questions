class Solution {
public:
    int dp[501][501];
    int solve(string s,string t,int i,int j){
        if(i==-1 && j==-1) return 0;
        else if(i==-1) return j+1;
        else if(j==-1) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j]=solve(s,t,i-1,j-1);
        else return dp[i][j]=1+min({solve(s,t,i-1,j-1),solve(s,t,i-1,j),solve(s,t,i,j-1)});
    }
    int minDistance(string s, string t) {
        memset(dp,-1,sizeof(dp));
        return solve(s,t,s.length()-1,t.length()-1);
    }
};