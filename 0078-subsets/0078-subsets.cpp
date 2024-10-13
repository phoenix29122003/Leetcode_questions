class Solution {
public:
    void solve(vector<int>&nums,int idx,int n,vector<int>ds,vector<vector<int>>&ans){
        if(idx==n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[idx]);
        solve(nums,idx+1,n,ds,ans);
        ds.pop_back();
        solve(nums,idx+1,n,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(nums,0,nums.size(),ds,ans);
        return ans;
    }
};