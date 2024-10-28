class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n=events.size();
        int i=0,ans=0;
        sort(events.begin(),events.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int d=1;d<=100001;d++){
            while(pq.size() && pq.top()<d) pq.pop();
            while(i<n && events[i][0]==d) pq.push(events[i++][1]);
            if(pq.size()) ans++,pq.pop();
            if(i>=n && pq.empty()) break;
        }
        return ans;
    }
};