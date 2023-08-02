class Solution {
public:
    void solve(vector<int>nums,int idx,int target,vector<int>&ds,vector<vector<int>>&ans){
        if(target<0) return;
        else if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            if(i!=idx && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            solve(nums,i+1,target-nums[i],ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>>ans;
        solve(nums,0,target,ds,ans);
        return ans;
    }
};