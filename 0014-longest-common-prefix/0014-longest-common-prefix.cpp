class Solution {
public:
    string solve(string s,string t){
        string ans="";
        for(int i=0;i<min(s.length(),t.length());i++){
            if(s[i]==t[i]) ans+=s[i];
            else break;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            ans=solve(ans,strs[i]);
        }
        return ans;
    }
};