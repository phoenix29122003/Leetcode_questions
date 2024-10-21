class Solution {
public:
    void solve(vector<int>&nums,int idx,int n,int target,vector<int>&ds,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        else if(idx>=n || target<0) return;
        for(int i=idx;i<n;i++){
            if(idx!=i && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            solve(nums,i+1,n,target-nums[i],ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(nums,0,nums.size(),target,ds,ans);
        return ans;
    }
};