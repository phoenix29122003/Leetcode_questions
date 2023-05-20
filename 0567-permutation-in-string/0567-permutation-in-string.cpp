class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int cnt1[26]={0};
        for(int i=0;i<s1.length();i++) cnt1[s1[i]-'a']++;
        for(int i=0;i<s2.length();i++)
        {
            bool flag=true;
            string str=s2.substr(i,s1.length());
            int cnt2[26]={0};
            for(int j=0;j<str.length();j++) cnt2[str[j]-'a']++;
            for(int k=0;k<26;k++) if(cnt1[k]!=cnt2[k]) 
            {
                flag=false;
                break;
            }
            if(flag==true) return true;
        }
        return false;
    }
};