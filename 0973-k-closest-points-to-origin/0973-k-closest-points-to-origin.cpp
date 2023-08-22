class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<vector<int>>pq;
        for(auto it:points){
            pq.push({it[0]*it[0]+it[1]*it[1],it[0],it[1]});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()){
            ans.push_back({pq.top()[1],pq.top()[2]});
            pq.pop();
        }
        return ans;
    }
};