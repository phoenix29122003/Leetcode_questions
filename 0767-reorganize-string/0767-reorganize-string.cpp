class Solution {
public:
    string reorganizeString(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++) mp[s[i]]++;
        priority_queue<pair<int,char>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        if(pq.top().first>(n+1)/2) return "";
        int i=0;
        while(pq.size()){
            int freq=pq.top().first;
            char ch=pq.top().second;
            pq.pop();
            while(freq--){
                s[i]=ch;
                i+=2;
                if(i>=n) i=1;
            }
        }
        return s;
    }
};