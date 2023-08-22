class Solution {
public:
    int kthSmallest(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                pq.push(grid[i][j]);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top();
    }
};