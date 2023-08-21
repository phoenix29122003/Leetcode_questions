class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        long long l=1,h=x;
        while(l<=h){
            long long m=(l+h)/2;
            if(m==x/m) return m;
            else if(m<x/m) l=m+1;
            else h=m-1;
        }
        return h;
    }
};