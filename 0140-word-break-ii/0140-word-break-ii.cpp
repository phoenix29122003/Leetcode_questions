class Solution {
public:
    void solve(string s,int idx,int n,set<string>&set,string ds,vector<string>&ans){
        if(idx==n){
            ds.pop_back();
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<n;i++){
            string str=s.substr(idx,i-idx+1);
            if(set.find(str)!=set.end()){
                solve(s,i+1,n,set,ds+str+" ",ans);
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& word) {
        vector<string>ans;
        string ds="";
        set<string>set(word.begin(),word.end());
        solve(s,0,s.length(),set,ds,ans);
        return ans;
    }
};