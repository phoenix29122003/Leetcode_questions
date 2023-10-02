class Solution {
public:
    bool solve(string s,string t){
        if(s.length()!=t.length()) return false;
        unordered_map<char,char>mp1,mp2;
        for(int i=0;i<s.length();i++){
            if(mp1.find(s[i])!=mp1.end() && mp1[s[i]]!=t[i]) return false;
            else mp1[s[i]]=t[i];
        } 
        for(int i=0;i<t.length();i++){
            if(mp2.find(t[i])!=mp2.end() && mp2[t[i]]!=s[i]) return false;
            else mp2[t[i]]=s[i];
        }
        for(auto it:mp1){
            if(it.first!=mp2[it.second]) return false;
        }
        for(auto it:mp2){
            if(it.first!=mp1[it.second]) return false;
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return solve(s,t);
    }
};