class Solution {
public:
    unordered_map<int,int>mp;
    int solve(int n){
        if(n==1) return 0;
        if(mp.find(n)!=mp.end()) return mp[n];
        if(n%2==0) return mp[n]=1+solve(n/2);
        else return mp[n]=2+min(solve((n)/2),solve(n/2+1));
    }
    int integerReplacement(int n) {
        return solve(n);
    }
};