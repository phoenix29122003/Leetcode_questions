class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=INT_MAX,diff=INT_MAX;
        for(int i=0;i<n;i++){
            long long rem=(long long)target-(long long)nums[i];
            int j=i+1,k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target) return sum;
                if(abs(sum-target)<diff){
                    diff=abs(sum-target);
                    ans=sum;
                }
                if(rem<nums[j]+nums[k]) k--;
                else j++;
            }
        }
        return ans;
    }
};