class Solution {
public:
    int MOD = 1000000007;
    int solve(vector<int>&group,vector<int>&profit,int n,int minProfit,int idx,vector<vector<vector<int>>>&dp)
    {
        if(n<0) return 0;
        if(idx==group.size())
        {
            if(minProfit>0) return 0;
            else return 1;
        }
        if(minProfit<0) minProfit=0;
        if(dp[n][minProfit][idx]!=-1) return dp[n][minProfit][idx];
        int take=solve(group,profit,n-group[idx],minProfit-profit[idx],idx+1,dp);
        int nottake=solve(group,profit,n,minProfit,idx+1,dp);
        return dp[n][minProfit][idx]=(take+(long long)nottake)%MOD;
    }
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        int m=profit.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(minProfit+1,vector<int>(m+1,-1)));
        return solve(group,profit,n,minProfit,0,dp);
    }
};