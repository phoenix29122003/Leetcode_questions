class Solution {
public:
    string convert(string s, int n) {
        string ans="";
        int m=s.length(),i=0,j=0;
        vector<string>dum(m);
        while(j<m)
        {
            for(int i=0;i<n && j<m;i++,j++) dum[i]+=s[j];
            for(int i=n-2;i>0 && j<m;i--,j++) dum[i]+=s[j];
        }
        for(int i=0;i<n;i++) ans+=dum[i];
        return ans;
    }
};