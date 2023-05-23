class Solution {
public:
    void solve(int o,int c,int n,string ds,vector<string>&ans)
    {
        if(ds.size()==2*n)
        {
            ans.push_back(ds);
            return;
        }
        if(o<n) solve(o+1,c,n,ds+'(',ans);
        if(c<o) solve(o,c+1,n,ds+')',ans);
    }
    vector<string> generateParenthesis(int n) {
        string ds="";
        vector<string>ans;
        solve(0,0,n,"",ans);
        return ans;
    }
};