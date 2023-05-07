class Solution {
public:
    
void solve(vector<int>& num,int target,int idx,vector<int>& ds,vector<vector<int>>& ans)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        else
        {
            for(int i=idx;i<num.size();i++) 
            {
                if(num[i]>target) return;
                if(i&&num[i]==num[i-1]&&i>idx) continue; 
                ds.push_back(num[i]),
                solve(num,target-num[i],i+1,ds,ans); 
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &num, int target) 
    {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(num.begin(),num.end());
        solve(num,target,0,ds,ans);
        return ans;
    }
};