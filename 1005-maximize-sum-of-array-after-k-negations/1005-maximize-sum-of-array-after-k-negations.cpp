class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:nums) pq.push(it);
        while(k--){
            int x=pq.top();
            pq.pop();
            pq.push(-x);
        }
        int ans=0;
        while(pq.size()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};