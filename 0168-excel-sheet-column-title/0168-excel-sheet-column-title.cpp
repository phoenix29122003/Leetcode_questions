class Solution {
public:
    string convertToTitle(int n) {
        n--;
        string ans="";
        while(n>=0)
        {
            ans+=('A'+n%26);
            n/=26;
            n--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};