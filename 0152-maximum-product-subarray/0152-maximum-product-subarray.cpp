class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans1=INT_MIN,prod1=1,ans2=INT_MIN,prod2=1,n=nums.size();
        for(int i=0;i<n;i++){
            prod1*=nums[i];
            ans1=max(ans1,prod1);
            if(prod1==0) prod1=1;
        }
        for(int i=n-1;i>=0;i--){
            prod2*=nums[i];
            ans2=max(ans2,prod2);
            if(prod2==0) prod2=1;
        }
        return max(ans1,ans2);
    }
};