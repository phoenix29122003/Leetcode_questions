class Solution {
public:
    int countPrimes(int n) {
        vector<int>vis(n,false);
        int ans=0;
        for(long long i=2;i<n;i++)
        {
            if(vis[i]) continue;
            ans++;
            for(long long j=i*i;j<n;j+=i) vis[j]=true;
        }
        return ans;
    }
};