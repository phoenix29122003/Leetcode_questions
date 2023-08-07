class Solution {
public:
    string addStrings(string s, string t) {
        int i=s.length()-1,j=t.length()-1;
        int carry=0;
        string ans="";
        while(i>=0 || j>=0 || carry){
            int x=i>=0?s[i--]-'0':0;
            int y=j>=0?t[j--]-'0':0;
            int sum=x+y+carry;
            carry=sum/10;
            ans+=sum%10+'0';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};