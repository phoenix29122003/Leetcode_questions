class Solution {
public:
    string reverseOnlyLetters(string s) {
        string dum="";
        for(auto it:s) if(('a'<=it && it<='z')||('A'<=it && it<='Z')) dum+=it;
        reverse(dum.begin(),dum.end());
        int j=0;
        for(int i=0;i<s.length();i++) if(('a'<=s[i] && s[i]<='z')||('A'<=s[i] && s[i]<='Z')) s[i]=dum[j++];
        return s;
    }
};