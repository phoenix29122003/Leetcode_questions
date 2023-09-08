class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<double,pair<int,int>>>pq;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                pq.push({(double)nums[i]/(double)nums[j],{nums[i],nums[j]}});
                if(pq.size()>k) pq.pop();
            }
        }
        vector<int>ans;
        ans.push_back(pq.top().second.first);
        ans.push_back(pq.top().second.second);
        return ans;
    }
}; 