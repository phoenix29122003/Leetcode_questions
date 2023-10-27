class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        string dum="";
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U') dum+=s[i];
        }
        reverse(dum.begin(),dum.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U') s[i]=dum[j++];
        }
        return s;
    }
};