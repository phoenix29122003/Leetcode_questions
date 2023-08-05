class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length(),ans=n;
        for(int i=0;i<n;i++){
            int l=i-1,r=i+1;
            while(l>=0 && r<n) 
            {
                if(s[l--]==s[r++]) ans++;
                else break;
            }
        }
        for(int i=0;i<n;i++){
            int l=i,r=i+1;
            while(l>=0 && r<n) 
            {
                if(s[l--]==s[r++]) ans++;
                else break;
            }
        }
        return ans;
    }
};