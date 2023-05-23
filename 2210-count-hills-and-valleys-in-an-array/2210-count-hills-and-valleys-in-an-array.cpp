class Solution {
public:
    int countHillValley(vector<int>& nums) {
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int ans=0,n=nums.size();
        for(int i=1;i<n-1;i++) if((nums[i-1]<nums[i] && nums[i]>nums[i+1])||(nums[i-1]>nums[i]&&nums[i]<nums[i+1])) ans++;
        return ans;
    }
};