class Solution {
public:
    int solve(int n,int copied,int curr){
        if(curr>n) return 1000000;
        if(curr==n) return 0;
        return min(2+solve(n,curr,2*curr),1+solve(n,copied,curr+copied));
    }
    int minSteps(int n) {
        if(n==1) return 0;
        return 1+solve(n,1,1);
    }
};