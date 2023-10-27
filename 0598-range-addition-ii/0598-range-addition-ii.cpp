class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int a=m,b=n,q=ops.size();
        for(int i=0;i<q;i++){
            a=min(a,ops[i][0]);
            b=min(b,ops[i][1]);
        }
        return a*b;
    }
};