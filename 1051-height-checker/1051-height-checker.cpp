class Solution {
public:
    int heightChecker(vector<int>& nums) {
        int ans=0;
        vector<int>sorted=nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++) if(nums[i]!=sorted[i]) ans++;
        return ans;
    }
};