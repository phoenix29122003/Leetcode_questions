class Solution {
public:
    bool solve(string s,int idx,unordered_set<string>&set,vector<int>&dp)
    {
        if(idx==s.length()) return true;
        if(dp[idx]!=-1) return dp[idx];
        for(int i=idx;i<s.length();i++)
        {
            string str=s.substr(idx,i-idx+1);
            if(set.find(str)!=set.end() && solve(s,i+1,set,dp)) return dp[idx]=true;
        }
        return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>set(wordDict.begin(),wordDict.end());
        vector<int>dp(301,-1);
        return solve(s,0,set,dp);
    }
};