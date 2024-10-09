class Solution {
public:
    void solve(vector<int>&nums,int idx,int n,int target,vector<vector<int>>&ans,vector<int>ds){
        if(idx==n){
            if(target==0) ans.push_back(ds);
            return;
        }
        if(nums[idx]<=target){
            ds.push_back(nums[idx]);
            solve(nums,idx,n,target-nums[idx],ans,ds);
            ds.pop_back();
        }
        solve(nums,idx+1,n,target,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(nums,0,nums.size(),target,ans,ds);
        return ans;
    }
};