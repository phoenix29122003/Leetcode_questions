class Solution {
public:
    void solve(vector<int>nums,int idx,int k,int target,vector<int>&ds,vector<vector<int>>&ans){
        if(ds.size()==k) {
            if(target==0) ans.push_back(ds);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            ds.push_back(nums[i]);
            solve(nums,i+1,k,target-nums[i],ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<int>nums;
        for(int i=1;i<=9;i++) nums.push_back(i);
        vector<int>ds;
        vector<vector<int>>ans;
        solve(nums,0,k,target,ds,ans);
        return ans;
    }
};
