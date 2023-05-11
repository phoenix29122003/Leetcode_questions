class Solution {
public:
    void solve(int o,int c,int n,string curr,vector<string>&ans)
    {
        if(curr.length()==2*n)
        {
            ans.push_back(curr);
            return;
        }
        if(o<n) solve(o+1,c,n,curr+'(',ans);
        if(c<o) solve(o,c+1,n,curr+')',ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        solve(0,0,n,"",ans);
        return ans;
    }
};