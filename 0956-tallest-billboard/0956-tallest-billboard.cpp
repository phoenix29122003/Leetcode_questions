class Solution {
public:
    int dp[21][10001];
    int solve(vector<int>&rods,int idx,int diff)
    {
        if(idx==rods.size())
        {
            if(diff==0) return 0;
            return -1e5;
        }
        if(dp[idx][5000+diff]!=-1) return dp[idx][5000+diff];
        int op1=solve(rods,idx+1,diff);
        int op2=rods[idx]+solve(rods,idx+1,diff+rods[idx]);
        int op3=rods[idx]+solve(rods,idx+1,diff-rods[idx]);
        return dp[idx][diff+5000]=max(op1,max(op2,op3));
    }
    int tallestBillboard(vector<int>& rods) {
        memset(dp,-1,sizeof(dp));
        int ans=solve(rods,0,0)/2;
        return ans;
    }
};