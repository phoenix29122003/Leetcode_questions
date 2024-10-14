class Solution {
public:
    void solve(vector<int>&nums,int idx,int n,vector<int>&ds,vector<vector<int>>&ans){
        ans.push_back(ds);
        for(int i=idx;i<n;i++){
            if(i!=idx && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            solve(nums,i+1,n,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(nums,0,nums.size(),ds,ans);
        return ans;
    }
};