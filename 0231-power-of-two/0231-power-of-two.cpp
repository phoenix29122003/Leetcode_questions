class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;
        int cnt=__builtin_popcount(n);
        return cnt==1;
    }
};