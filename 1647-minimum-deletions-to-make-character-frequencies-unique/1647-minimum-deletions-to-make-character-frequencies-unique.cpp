class Solution {
public:
    int minDeletions(string s) {
        int n=s.length(),ans=0;
        unordered_map<char,int>mp;
        for(auto it:s) mp[it]++;
        int max_freq=INT_MAX;
        priority_queue<pair<int,char>>pq;
        for(auto it:mp) pq.push({it.second,it.first});
        while(pq.size()){
            char curr_ele=pq.top().second;
            int curr_freq=pq.top().first;
            if(max_freq==INT_MAX){
                max_freq=curr_freq;
            }
            else{
                int desired_freq=max_freq-1;
                if(curr_freq>=desired_freq){
                    if(desired_freq<0) desired_freq=0;
                    ans+=curr_freq-desired_freq;
                    max_freq=desired_freq;
                }
                else{
                    max_freq=curr_freq;
                }
            }
            pq.pop();
        }
        return ans;
    }
};