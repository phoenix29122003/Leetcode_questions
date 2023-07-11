class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& nums) {
        int n=nums.size(),ans=0,maxr=nums[n-1]-(n-1);
        for(int i=n-2;i>=0;i--)
        {
            maxr=max(maxr,nums[i+1]-(i+1));
            ans=max(ans,nums[i]+i+maxr);
        }
        return ans;
    }
};