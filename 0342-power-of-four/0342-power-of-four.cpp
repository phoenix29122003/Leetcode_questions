class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0) return false;
        int cnt=__builtin_popcount(n);
        if(cnt==1 && ((int)log2(n))%2==0) return true;
        return false;
    }
};