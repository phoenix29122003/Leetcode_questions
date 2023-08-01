class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& nums, int k) {
        int ans=INT_MIN;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++){
            while(pq.size() && nums[i][0]-pq.top().second>k) pq.pop();
            if(pq.size()) ans=max(ans,nums[i][0]+nums[i][1]+pq.top().first);
            pq.push({nums[i][1]-nums[i][0],nums[i][0]});
        }
        return ans;
    }
};