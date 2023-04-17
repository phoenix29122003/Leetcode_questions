class Solution {
public:
    bool pal(string str,int i,int j)
    {
        while(i<=j)
        {
            if(str[i++]!=str[j--]) return false;
        }
        return true;
    }
    void solve(int idx,string s,vector<vector<string>>&ans,vector<string>&ds)
    {
        if(idx==s.length())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<s.length();i++)
        {
            if(pal(s,idx,i)) 
            {
                ds.push_back(s.substr(idx,i-idx+1));
                solve(i+1,s,ans,ds);
                ds.pop_back();
            }
        }
    } 
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        solve(0,s,ans,ds);
        return ans;
    }
};