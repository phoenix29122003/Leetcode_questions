class MinStack {
public:
    stack<pair<int,int>>st;
    int mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()) mini=val;
        else mini=min(val,st.top().second);
        st.push({val,mini});
    }
    
    void pop() {
        if(st.size()) st.pop();
    }
    
    int top() {
        if(st.size()==0) return -1;
        else return st.top().first;
    }
    
    int getMin() {
        if(st.size()==0) return -1;
        else return st.top().second;
    }
};