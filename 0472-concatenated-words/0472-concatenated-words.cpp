class Solution {
public:
    bool solve(string &s,int idx,unordered_set<string>&set,unordered_map<int,bool>&dp,int cut){
        if(idx==s.length()){
            return cut>=2?dp[idx]=true:dp[idx]=false;
        }
        if(dp.find(idx)!=dp.end()) return dp[idx];
        for(int i=idx;i<s.length();i++){
            string prefix=s.substr(idx,i-idx+1);
            if(set.find(prefix)!=set.end() && solve(s,i+1,set,dp,cut+1)) return dp[idx]=true;
        }
        return dp[idx]=false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string>ans;
        unordered_set<string>set(words.begin(),words.end());
        for(int i=0;i<words.size();i++){
            unordered_map<int, bool> dp;
            if(solve(words[i],0,set,dp,0)==true) ans.push_back(words[i]);
        }
        return ans;
    }
};