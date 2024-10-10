class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int ans=INT_MIN;
        int sum=0,n=nums.size();
        for(int i=0;i<k;i++) sum+=nums[i];
        for(int i=0;i<k;i++){
            ans=max(ans,sum);
            sum-=nums[k-1-i];
            sum+=nums[n-1-i];
            cout<<"ans: "<<ans<<endl;
            cout<<"sum: "<<sum<<endl;
        }
        ans=max(ans,sum);
        return ans;
    }
};