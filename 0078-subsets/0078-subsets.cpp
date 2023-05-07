class Solution {
public:
    void solve(vector<int>&nums,int idx,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(idx>=nums.size())
        {
            ans.push_back(ds);
            return;
        }
        solve(nums,idx+1,ans,ds);
        ds.push_back(nums[idx]);
        solve(nums,idx+1,ans,ds);
        ds.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(nums,0,ans,ds);
        return ans;
    }
};