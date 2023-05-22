class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(),1),cnt(nums.size(),1);
        int mxLen=1,res=0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j]){
                    if(dp[j]+1 > dp[i]){
                    dp[i] = dp[j]+1;
                    cnt[i] = cnt[j];
                    }
                    else if(dp[j]+1 == dp[i])
                        cnt[i] += cnt[j];
                    }
            }
            mxLen = max(mxLen, dp[i]);
        }
        for(int i=0;i<dp.size();i++){
            if(dp[i] == mxLen)
                res += cnt[i];
        }
        return res;
    }
};