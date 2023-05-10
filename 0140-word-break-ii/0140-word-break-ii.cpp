class Solution {
public:
    void solve(string s,int idx,unordered_set<string>&set,string ds,vector<string>&ans)
    {
        if(idx==s.length())
        {
            ds.pop_back();
            ans.push_back(ds);
            return;
        }
        string str="";
        for(int i=idx;i<s.length();i++)
        {
            str+=s[i];
            if(set.find(str)!=set.end()) solve(s,i+1,set,ds+str+" ",ans);
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string>ans;
        unordered_set<string>set(wordDict.begin(),wordDict.end());
        solve(s,0,set,"",ans);
        return ans;
    }
};