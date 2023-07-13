class Solution {
public:
    int findMinDifference(vector<string>& nums) {
        int n=nums.size();
        vector<int>mins;
        for(int i=0;i<n;i++) mins.push_back(stoi(nums[i].substr(0,2))*60+stoi(nums[i].substr(3,2)));
        sort(mins.begin(),mins.end());
        int ans=INT_MAX;
        for(int i=1;i<n;i++) ans=min(ans,mins[i]-mins[i-1]);
        ans=min(ans,mins[0]+24*60-mins[n-1]);
        return ans;
    }
};