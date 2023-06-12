class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int ans=0;
        for(int k=1;k*k<=2*n;k++)
            if((n-(k-1)*k/2)%k==0) ans++;
        return ans;
    }
};