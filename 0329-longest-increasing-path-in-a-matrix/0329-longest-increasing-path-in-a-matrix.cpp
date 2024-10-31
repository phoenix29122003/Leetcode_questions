class Solution {
public:
    int solve(vector<vector<int>>&matrix,int i,int j,int m,int n,int prev,vector<vector<int>>&dp){
        if(i<0 || j<0 || i>=m || j>=n || matrix[i][j]<=prev) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=1+max({solve(matrix,i-1,j,m,n,matrix[i][j],dp),
                               solve(matrix,i+1,j,m,n,matrix[i][j],dp),
                               solve(matrix,i,j-1,m,n,matrix[i][j],dp),
                               solve(matrix,i,j+1,m,n,matrix[i][j],dp)});
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),ans=0;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans=max(ans,solve(matrix,i,j,m,n,-1,dp));
            }
        }
        return ans;
    }
};