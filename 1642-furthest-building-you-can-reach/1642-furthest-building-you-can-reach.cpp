class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=heights.size(),i=0;
        while(i<n-1){
            int diff=heights[i+1]-heights[i];
            if(diff>0){
                pq.push(diff);
                if(pq.size()>ladders){
                    int required_bricks=pq.top();
                    pq.pop();
                    bricks-=required_bricks;
                    if(bricks<0) return i;
                }
            }
            i++;
        }
        return i;
    }
};