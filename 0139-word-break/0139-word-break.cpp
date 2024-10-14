class Solution {
public:
    bool solve(string &s,int idx,int n,unordered_set<string>&set,vector<int>&dp){
        if(idx==n) return true;
        if(idx>n) return false;
        if(dp[idx]!=-1) return dp[idx];
        for(int i=idx;i<n;i++){
            if(set.find(s.substr(idx,i-idx+1))!=set.end()){
                if(solve(s,i+1,n,set,dp)) return dp[idx]=true;
            }
        }
        return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> set(wordDict.begin(),wordDict.end());
        vector<int>dp(s.length()+1,-1);
        return solve(s,0,s.length(),set,dp);
    }
};