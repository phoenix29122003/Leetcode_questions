class Solution {
public:
    bool isunique(string s){
        set<char>set;
        for(char ch:s) set.insert(ch);
        return s.length()==set.size();
    }
    void solve(vector<string>arr,int idx,string ds,int &ans){
        if(!isunique(ds)) return;
        if(ans<ds.length()) ans=ds.length();
        for(int i=idx;i<arr.size();i++) solve(arr,i+1,ds+arr[i],ans);
    }
    int maxLength(vector<string>& arr) {
        int ans=0;
        solve(arr,0,"",ans);
        return ans;
    }
};