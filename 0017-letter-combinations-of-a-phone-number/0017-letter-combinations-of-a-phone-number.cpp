class Solution {
public:
    vector<string>mp={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"},ans;
    void solve(string &digits,int idx,string &ds)
    {
        if(idx==digits.size())
        {
            ans.push_back(ds);
            return;
        }
        for(auto &ch:mp[digits[idx]-'2'])
        {
            ds.push_back(ch);
            solve(digits,idx+1,ds);
            ds.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        string ds="";
        solve(digits,0,ds);
        return ans;
    }
};