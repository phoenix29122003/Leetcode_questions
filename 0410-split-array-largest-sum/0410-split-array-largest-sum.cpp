class Solution {
public:
    bool solve(vector<int>&nums,int mid,int k,int n){
        int cnt=1,sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>mid) cnt++,sum=nums[i];
        }
        return cnt<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size(),ans=-1;
        int mini=nums[0],sum=0;
        for(int i=0;i<n;i++) mini=max(mini,nums[i]),sum+=nums[i];
        int i=mini,j=sum;
        while(i<=j){
            int mid=(i+j)/2;
            if(solve(nums,mid,k,n)) ans=mid,j=mid-1;
            else i=mid+1;
        }
        return ans;
    }
};