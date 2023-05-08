class Solution {
public:
    bool isuniq(string str)
    {
        set<char>s;
        for(int i=0;i<str.length();i++)
        {
            if(s.find(str[i])!=s.end()) return false;
            else s.insert(str[i]);
        }
        return true;
    }
    void solve(vector<string>&arr,int idx,string ds,int &ans)
    {
        if(!isuniq(ds)) return;
        if(ans<ds.length()) ans=ds.length();
        for(int i=idx;i<arr.size();i++)
        {
            solve(arr,i+1,ds+arr[i],ans);
        }
    }
    int maxLength(vector<string>& arr) {
        int ans=0;
        string ds="";
        solve(arr,0,ds,ans);
        return ans;
    }
};