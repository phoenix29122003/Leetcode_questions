class Solution {
public:
    void comsum(vector<int>&ds,vector<vector<int>>&ans,int target,int sum,vector<int> &candidates,int idx,int n)
    {
        if(target==sum){
            ans.push_back(ds);
            return;
        }
        else if(sum>target){
            return;
        }
        for(int i=idx;i<n;i++)
        {
            if(i!=idx && candidates[i]==candidates[i-1]) continue;
            sum+=candidates[i];
            ds.push_back(candidates[i]);
            comsum(ds,ans,target,sum,candidates,i+1,n);
            sum-=candidates[i];
            ds.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        comsum(ds,ans,target,0,candidates,0,n);
        return ans;
    }
};