class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0,j=0;
        string ans="";
        while(i<n)
        {
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            j=i;
            while(j<n && s[j]!=' ') j++;
            string str=s.substr(i,j-i);
            if(ans=="") ans=str;
            else ans=str+" "+ans;
            i=j+1;
        }
        return ans;
    }
};