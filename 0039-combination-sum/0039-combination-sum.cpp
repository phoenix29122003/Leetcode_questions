class Solution {
public:
    void solve(vector<int>&nums,int target,int idx,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(idx==nums.size())
        {
            if(target==0) ans.push_back(ds);
            return;
        }
        solve(nums,target,idx+1,ds,ans);
        if(nums[idx]<=target)
        {
            ds.push_back(nums[idx]);
            solve(nums,target-nums[idx],idx,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(nums,target,0,ds,ans);
        return ans;
    }
};