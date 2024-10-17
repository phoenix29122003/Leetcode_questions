class Solution {
public:
    int countSubstrings(string s) {
        int i=0,n=s.length();
        int ans=n;
        while(i<n){
            int j=i-1,k=i+1;
            while(j>=0 && k<n && s[j--]==s[k++]) ans++;
            j=i,k=i+1;
            while(j>=0 && k<n && s[j--]==s[k++]) ans++;
            i++;
        }
        return ans;
    }
};