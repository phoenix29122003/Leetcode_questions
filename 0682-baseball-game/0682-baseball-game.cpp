class Solution {
public:
    int calPoints(vector<string>& op) {
        int ans=0,val1,val2;
        stack<int>st;
        for(auto it:op)
        {
            if(it=="C") st.pop();
            else if(it=="D") st.push(2*st.top());
            else if(it=="+")
            {
                val1=st.top(),st.pop();
                val2=st.top();
                st.push(val1);
                st.push(val1+val2);
            }
            else st.push(stoi(it));
        }
        while(st.size()) ans+=st.top(),st.pop();
        return ans;
    }
};