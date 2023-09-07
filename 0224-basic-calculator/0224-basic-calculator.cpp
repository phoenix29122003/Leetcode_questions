class Solution {
public:
    int calculate(string s) {
        stack<pair<int,int>>st;
        long long int sum=0;
        int sign=1,n=s.length();
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(isdigit(s[i])){
                long long int num=0;
                while(i<n && isdigit(s[i])){
                    num=num*10+(s[i++]-'0');
                }
                i--;
                sum+=(num)*sign;
                sign=1;
            }
            else if(s[i]=='('){
                st.push({sum,sign});
                sum=0,sign=1;
            }
            else if(s[i]==')'){
                sum=st.top().first+(st.top().second*sum);
                st.pop();
            }
            else if(s[i]=='-') sign=(-1)*sign;
        }
        return sum;
    }
};