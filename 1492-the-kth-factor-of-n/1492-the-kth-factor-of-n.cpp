class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>fact;
        for(int i=1;i<=n;i++) if(n%i==0) fact.push_back(i);
        if(k>fact.size()) return -1;
        else return fact[k-1];
    }
};