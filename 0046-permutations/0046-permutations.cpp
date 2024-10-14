class Solution {
public:
    void solve(vector<int>&nums,int idx,int n,vector<vector<int>>&ans){
        if(idx==n){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<n;i++){
            swap(nums[idx],nums[i]);
            solve(nums,idx+1,n,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(nums,0,nums.size(),ans);
        return ans;
    }
};