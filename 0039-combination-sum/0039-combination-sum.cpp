class Solution {
public:
    void solve(vector<int>nums,int idx,int target,vector<int>ds,vector<vector<int>>&ans)
    {
        if(idx>=nums.size() || target<0) return;
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        solve(nums,idx+1,target,ds,ans);
        ds.push_back(nums[idx]);
        solve(nums,idx,target-nums[idx],ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        solve(nums,0,target,ds,ans);
        return ans;
    }
};