class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int m=a.length(),n=b.length(),i=m-1,j=n-1,carry=0;
        while(i>=0 || j>=0 || carry){
            int x=i>=0?a[i--]-'0':0;
            int y=j>=0?b[j--]-'0':0;
            int sum=x+y+carry;
            carry=sum/2;
            sum=sum%2;
            ans+=to_string(sum);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};