class CustomStack {
public:
    vector<int>st;
    int mx;
    CustomStack(int maxSize) {
        mx=maxSize;
    }
    
    void push(int x) {
        if(st.size()<mx) st.push_back(x);
    }
    
    int pop() {
        if(st.size()==0) return -1;
        int x=st.back();
        st.pop_back();
        return x;
    }
    
    void increment(int k, int val) {
        int x=k<st.size()?k:st.size();
        for(int i=0;i<x;i++) st[i]+=val;
    }
};