class Solution {
public:
    static bool comp(string a,string b) 
    {
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>dum;
        for(auto it:nums) dum.push_back(to_string(it));
        sort(dum.begin(),dum.end(),comp);
        string ans="";
        for(auto it:dum) ans+=it;
        if(ans[0]=='0') return "0";
        else return ans;
    }
};