class Solution {
public:
    string reorganizeString(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        for(auto it:s) mp[it]++;
        int maxfreq=0;
        for(auto it:mp) maxfreq=max(maxfreq,it.second);
        if(maxfreq>(n+1)/2) return "";
        priority_queue<pair<int,char>>pq;
        for(auto it:mp) pq.push({it.second,it.first});
        int i=0;
        vector<char>ans(n);
        while(pq.size()){
            auto x=pq.top();
            pq.pop();
            char ch=x.second;
            int freq=x.first;
            while(freq--){
                if(i==n || i>n) i=1;
                ans[i]=ch;
                i+=2;
            }
        }
        string res="";
        int j=0;
        while(j<n){
            res+=ans[j++];
        }
        return res;
    }
};