class Solution {
public:
    void solve(vector<int>nums,int idx,int target,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(idx==nums.size())
        {
            if(target==0) ans.push_back(ds);
            return;
        }
        solve(nums,idx+1,target,ans,ds);
        if(nums[idx]<=target)
        {
            ds.push_back(nums[idx]);
            solve(nums,idx,target-nums[idx],ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>&nums,int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(nums,0,target,ans,ds);
        return ans;
    }
};