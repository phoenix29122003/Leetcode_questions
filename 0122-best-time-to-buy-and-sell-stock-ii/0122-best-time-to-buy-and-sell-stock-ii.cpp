class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]<=nums[i+1]) ans+=nums[i+1]-nums[i];
        return ans;
    }
};