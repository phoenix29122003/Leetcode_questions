class StockSpanner {
public:
    stack<pair<int,int>>st;
    int next(int price) {
        int curr=1;
        while(!st.empty() && st.top().first<=price)
        {
            curr+=st.top().second;
            st.pop();
        }
        st.push({price,curr});
        return curr;
    }
};