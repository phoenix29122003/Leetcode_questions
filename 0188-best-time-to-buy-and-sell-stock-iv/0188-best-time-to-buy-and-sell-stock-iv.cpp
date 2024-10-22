class Solution {
public:
    int solve(vector<int>&nums,int idx,int canBuy,int n,int k,vector<vector<vector<int>>>&dp){
        if(idx==n || k==0) return 0;
        if(dp[idx][canBuy][k]!=-1) return dp[idx][canBuy][k];
        if(canBuy){
            int buy=-nums[idx]+solve(nums,idx+1,0,n,k,dp);
            int notBuy=solve(nums,idx+1,1,n,k,dp);
            return dp[idx][canBuy][k]=max(buy,notBuy);
        }
        else{
            int sell=nums[idx]+solve(nums,idx+1,1,n,k-1,dp);
            int notSell=solve(nums,idx+1,0,n,k,dp);
            return dp[idx][canBuy][k]=max(sell,notSell);
        }
    }
    int maxProfit(int k, vector<int>& nums) {
        vector<vector<vector<int>>>dp(nums.size()+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return solve(nums,0,1,nums.size(),k,dp);
    }
};