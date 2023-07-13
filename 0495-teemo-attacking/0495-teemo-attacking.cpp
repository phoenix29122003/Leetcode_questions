class Solution {
public:
    int findPoisonedDuration(vector<int>& nums, int d) {
        if(d==0) return 0;
        int ans=d;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]+d<=nums[i]) ans+=d;
            else ans+=d-(nums[i-1]+d-nums[i]);
        }
        return ans;
    }
};