class Solution {
public:
    int solve(int printed,int n,int copied)
    {
        if(printed>n) return INT_MAX/2;
        else if(printed==n) return 0;
        return min(2+solve(2*printed,n,printed),1+solve(printed+copied,n,copied));
    }
    int minSteps(int n) {
        return n>1?1+solve(1,n,1):0;
    }
};