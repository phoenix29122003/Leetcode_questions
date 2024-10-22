class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int m=num1.length(),n=num2.length(),i=m-1,j=n-1,carry=0;
        while(i>=0 || j>=0){
            int n1=0,n2=0;
            if(i>=0) n1=num1[i]-'0';
            if(j>=0) n2=num2[j]-'0';
            int sum=n1+n2+carry;
            carry=sum/10;
            sum=sum%10;
            ans+=sum+'0';
            i--,j--;
        }
        if(carry==1) ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};