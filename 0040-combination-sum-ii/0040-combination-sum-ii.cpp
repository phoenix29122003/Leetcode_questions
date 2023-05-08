class Solution {
public:
    void solve(vector<int>&nums,int target,int idx,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            if(nums[i]>target) return;
            if(i && nums[i]==nums[i-1] && i!=idx) continue;
            ds.push_back(nums[i]);
            solve(nums,target-nums[i],i+1,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        solve(nums,target,0,ds,ans);
        return ans;
    }
};