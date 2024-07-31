class Solution {
public:
    vector<int> SieveOfEratosthenes(int srt, int n)
    {
        vector<int>primes;
        bool prime[n + 2];
        memset(prime, true, sizeof(prime));
        prime[0] = false;
        prime[1] = false;

        for(int p = 2;p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        for (int p = srt; p <= n; p++)
            if (prime[p])
                primes.push_back(p);
        return primes;
    }
    int nonSpecialCount(int l, int r) {
        vector<int>primes=SieveOfEratosthenes(sqrt(l),sqrt(r));
        int cnt=0;
        for(int i=0;i<primes.size();i++){
            if(l<=primes[i]*primes[i] && primes[i]*primes[i]<=r) cnt++;
        }
        return (r-l)-cnt+1;
    }
};