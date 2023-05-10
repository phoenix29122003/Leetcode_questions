class Solution {
public:
    bool solve(int i, int j,int m,int n, string& s, string& p,vector<vector<char>> &dp) {
        if(i>=m && j>=n) return 1;
        if(j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i>=s.size())
        {
            if(p[j+1]=='*')
            {
                return dp[i][j]=solve(i,j+2,m,n,s,p,dp);
            }
            return false;
        }
        if(j+1<p.size() && p[j+1]=='*')
        {
            if(p[j]=='.' || s[i]==p[j])
            {
                return dp[i][j]=solve(i+1,j,m,n,s,p,dp)||solve(i,j+2,m,n,s,p,dp);
            }
            else 
            {
                return dp[i][j]=solve(i,j+2,m,n,s,p,dp);
            }
        }
        else if(p[j]=='.' || p[j]==s[i])
        {
            return dp[i][j]=solve(i+1,j+1,m,n,s,p,dp);
        }
        return dp[i][j] = false; 
    }
    bool isMatch(string s, string p) {
        int m=s.size(),n=p.size();
        vector<vector<char>>dp(m+1,vector<char>(n+1,-1));
        return solve(0,0,m,n,s,p,dp);  
    }
};