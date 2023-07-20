class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int m=max({a,b,c});
        if(2*m>a+b+c) return a+b+c-m;
        else return (a+b+c)/2;
    }
};