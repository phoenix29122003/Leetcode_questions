class Solution {
public:
    int myAtoi(string s) {
        int i=0,ans=0,n=s.length(),sign=1;
        while(i<n && s[i]==' ') i++;
        if(s[i]=='-' || s[i]=='+') sign=s[i++]=='-'?-1:1;
        while(i<n && ('0'<=s[i] && s[i]<='9')){
            int digit=sign*(s[i]-'0');
            if(sign==1 && (ans>INT_MAX/10 || (ans==INT_MAX/10 && digit>INT_MAX%10))) return INT_MAX;
            if(sign==-1 && (ans<INT_MIN/10 || (ans==INT_MIN/10 && digit<INT_MIN%10))) return INT_MIN;
            ans=ans*10+digit;
            i++;
        }
        return ans;
    }
};