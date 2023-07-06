class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==1) return 1;
        vector<int>ans(n);
        ans[0]=1;
        int p2=0,p3=0,p5=0;
        for(int i=1;i<n;i++)
        {
            ans[i]=min({2*ans[p2],3*ans[p3],5*ans[p5]});
            if(ans[i]%2==0) p2++;
            if(ans[i]%3==0) p3++;
            if(ans[i]%5==0) p5++;
        }
        return ans[n-1];
    }
};