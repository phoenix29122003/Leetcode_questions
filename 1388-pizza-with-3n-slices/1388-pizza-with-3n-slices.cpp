class Solution {
public:
    int dp[501][170];
    int solve(int i,int n,vector<int>& slices)
    {
        if(n==0 || i>=slices.size()) return 0;
        if(dp[i][n]!=-1) return dp[i][n];
        return dp[i][n]=max(solve(i+1,n,slices),slices[i]+solve(i+2,n-1,slices));
    }
    int maxSizeSlices(vector<int>& slices) 
    {
        int n=slices.size();
        memset(dp,-1,sizeof(dp));
        int p1=solve(1,n/3,slices); 
        memset(dp,-1,sizeof(dp));
        slices[n-1]=0;
        int p2=solve(0,n/3,slices);
        return max(p1,p2);
    }
};