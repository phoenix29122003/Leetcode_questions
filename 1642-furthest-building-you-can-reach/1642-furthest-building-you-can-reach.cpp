class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int>pq;
        int n=heights.size();
        for(int i=0;i<n-1;i++)
        {
            if(heights[i]>=heights[i+1]) continue;
            bricks-=heights[i+1]-heights[i];
            pq.push(heights[i+1]-heights[i]);
            if(bricks<0)
            {
                bricks+=pq.top();
                pq.pop();
                if(ladders>0) ladders--;
                else return i;
            }
        }
        return n-1;
    }
};