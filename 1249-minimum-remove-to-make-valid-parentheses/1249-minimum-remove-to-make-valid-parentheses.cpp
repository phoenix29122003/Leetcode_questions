class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')'){
                if(st.empty() || s[st.top()]==')') st.push(i);
                else if(s[st.top()]=='(') st.pop();
            }
        }
        cout<<st.size();
        while(st.size()){
            s[st.top()]='#';
            st.pop();
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]!='#') ans+=s[i];
        }
        return ans;
    }
};