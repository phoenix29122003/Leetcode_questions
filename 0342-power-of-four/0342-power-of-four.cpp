class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        long long logfloor=floor((double)log2(n));
        long long logceil=ceil((double)log2(n));
        if(logfloor!=logceil) return false;
        if(logfloor%2==0) return true;
        else return false;
    }
};