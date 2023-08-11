class Solution {
public:
    int numTeams(vector<int>& nums) {
        int n=nums.size();
        vector<int>asc(n,0),des(n,0);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]) asc[i]++;
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[i]) des[i]++;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]) ans+=asc[j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]) ans+=des[j];
            }
        }
        return ans;
    }
};