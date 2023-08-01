class Solution {
public:
    void solve(vector<int>nums,int idx,vector<int>ds,vector<vector<int>>&ans){
        if(idx==nums.size()){
            ans.push_back(ds);
            return;
        }
        solve(nums,idx+1,ds,ans);
        ds.push_back(nums[idx]);
        solve(nums,idx+1,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        solve(nums,0,ds,ans);
        return ans;
    }
};