class Solution {
public:
    int solve(vector<vector<char>>&matrix,int i,int j,int m,int n,vector<vector<int>>&dp)
    {
        if(i<0 || j<0 || i>=m || j>=n || matrix[i][j]=='0') return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=1+min({solve(matrix,i,j+1,m,n,dp),solve(matrix,i+1,j+1,m,n,dp),solve(matrix,i+1,j,m,n,dp)});
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int ans=INT_MIN;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]=='1') ans=max(ans,solve(matrix,i,j,m,n,dp));
            }
        }
        return ans==INT_MIN?0:ans*ans;
    }
};