class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(auto it:s) mp[it]++;
        priority_queue<pair<int,char>>pq;
        for(auto it:mp) pq.push({it.second,it.first});
        int ans=0,prevfreq=INT_MAX;
        while(pq.size()){
            char ch=pq.top().second;
            int freq=pq.top().first;
            if(freq>=prevfreq){
                int cf=freq;
                freq=prevfreq-1;
                if(freq<0) ans+=cf;
                else ans+=cf-freq;
            }
            prevfreq=freq;
            pq.pop();
        }
        return ans;
    }
};