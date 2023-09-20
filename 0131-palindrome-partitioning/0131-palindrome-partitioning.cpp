class Solution {
public:
    bool ispal(string s){
        string t=s;
        reverse(t.begin(),t.end());
        return s==t;
    }
    void solve(string s,int idx,int n,vector<string>&ds,vector<vector<string>>&ans){
        if(idx==n){
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<n;i++){
            if(ispal(s.substr(idx,i-idx+1))){
                ds.push_back(s.substr(idx,i-idx+1));
                solve(s,i+1,n,ds,ans);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>ds;
        vector<vector<string>>ans;
        solve(s,0,s.length(),ds,ans);
        return ans;
    }
};