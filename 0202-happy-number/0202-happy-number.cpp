class Solution {
public:
    int digitSquareSum(int n){
        int ans=0;
        while(n){
            ans+=(n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int>st;
        while(1){
            n=digitSquareSum(n);
            if(n==1) return true;
            if(st.find(n)!=st.end()) return false;
            st.insert(n);
        }
    }
};