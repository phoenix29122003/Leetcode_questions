class Solution {
public:
    int n;
    int dp[100002][2][2];
    int solve(vector<int>& prices,int i,int hold,int k){
        if(i>=n || k==0)return 0;
        int& ans=dp[i][hold][k];
        if(ans!=-1)return ans;
        if(hold==1){
            ans=max(solve(prices,i+1,1,k),solve(prices,i+1,0,k-1)+prices[i]);
        }
        else{
            ans=max(solve(prices,i+1,0,k),solve(prices,i+1,1,k)-prices[i]);
        }
        return ans;
    }
    int maxProfit(vector<int>& prices) {
        n=prices.size();
        memset(dp,-1,sizeof(dp));
        return solve(prices,0,0,2);
    }
};