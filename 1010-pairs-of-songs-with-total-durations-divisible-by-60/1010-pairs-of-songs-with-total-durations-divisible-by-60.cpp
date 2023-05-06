class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=time.size();
        int ans=0;
        for(int i=0;i<n;i++) time[i]=time[i]%60;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find((60-time[i])%60)!=mp.end())
            {
                ans+=mp[(60-time[i])%60];
            }
            mp[(time[i])%60]++;
        }
        return ans;
    }
};