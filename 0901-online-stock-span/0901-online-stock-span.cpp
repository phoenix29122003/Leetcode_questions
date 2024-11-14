class StockSpanner {
public:
    stack<pair<int,int>>st;
    int time;
    StockSpanner() {
        time=0;
    }
    
    int next(int price) {
        time=1;
        while(st.size() && st.top().first<=price){
            time+=st.top().second;
            st.pop();
        }
        st.push({price,time});
        return time;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */