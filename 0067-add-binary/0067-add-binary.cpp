class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.length()-1,j=b.length()-1,carry=0;
        while(i>=0 || j>=0 || carry){
            int n1=0,n2=0;
            if(i>=0) n1=a[i]-'0';
            if(j>=0) n2=b[j]-'0';
            int sum=n1+n2+carry;
            carry=sum/2;
            sum=sum%2;
            ans=char(sum+'0')+ans;  
            i--,j--;
        }
        if(carry) ans='1'+ans;
        return ans;
    }
};