class Solution {
public:
    void solve(vector<char>&v,int n,int k,string &curr,vector<string>&ans)
    {
        if(ans.size()==k) return;
        if(curr.length()==n)
        {
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<3;i++)
        {
            if(curr.size()==0 || curr[curr.size()-1]!=v[i])
            {
                curr+=v[i];
                solve(v,n,k,curr,ans);
                curr.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        string curr="";
        vector<string>ans;
        vector<char>v={'a','b','c'};
        solve(v,n,k,curr,ans);
        if(ans.size()==k) return ans.back();
        return "";
    }
};