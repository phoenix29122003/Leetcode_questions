class Solution {
public:
    int ans=0;
    int solve(vector<int>& nums1,vector<int>& nums2,int i,int j,int m,int n,vector<vector<int>>&dp)
    {
        if(i>=m || j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        solve(nums1,nums2,i+1,j,m,n,dp),solve(nums1,nums2,i,j+1,m,n,dp);
        if(nums1[i]==nums2[j]) dp[i][j]=1+solve(nums1,nums2,i+1,j+1,m,n,dp);
        else dp[i][j]=0;
        ans=max(ans,dp[i][j]);
        return dp[i][j];
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size()+1,vector<int>(nums2.size()+1,-1));
        solve(nums1,nums2,0,0,nums1.size(),nums2.size(),dp);
        return ans;
    }
};