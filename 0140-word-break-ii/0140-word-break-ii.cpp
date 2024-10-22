class Solution {
public:
    void solve(string &s,int idx,int n,unordered_set<string>&set,string ds,vector<string>&ans){
        if(idx==n){
            ds.pop_back();
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<n;i++){
            if(set.find(s.substr(idx,i-idx+1))!=set.end()){
                solve(s,i+1,n,set,ds+s.substr(idx,i-idx+1)+" ",ans);
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string>ans;
        string str="";
        unordered_set<string>set(wordDict.begin(),wordDict.end());
        solve(s,0,s.length(),set,str,ans);
        return ans;
    }
};