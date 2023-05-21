class Solution {
public:
    bool ispal(string s)
    {
        string t=s;
        reverse(t.begin(),t.end());
        return t==s;
    }
    void solve(string s,int idx,vector<string>&ds,vector<vector<string>>&ans)
    {
        if(idx==s.length())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<s.length();i++)
        {
            if(ispal(s.substr(idx,i-idx+1)))
            {
                ds.push_back(s.substr(idx,i-idx+1));
                solve(s,i+1,ds,ans);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        solve(s,0,ds,ans);
        return ans;
    }
};
