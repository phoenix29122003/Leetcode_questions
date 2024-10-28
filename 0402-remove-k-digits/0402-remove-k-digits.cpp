class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        int n=num.length();
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(num[i]);
            else{
                while(st.size() && k && num[i]<st.top()) st.pop(),k--;
                st.push(num[i]);
                if(st.size()==1 && st.top()=='0') st.pop();
            }
        }
        while(st.size() && k) st.pop(),k--;
        string ans="";
        while(st.size()) ans+=st.top(),st.pop();
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.length()){
            if(ans[i]=='0') i++;
            else break;
        }
        ans=ans.substr(i);
        return ans.size()==0?"0":ans;
    }
};