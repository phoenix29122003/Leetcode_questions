class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size();
        int oddBefore[n];
        int evenBefore[n];
        int oddSum=0,evenSum=0;
        for(int i=0;i<n;i++)
        {
            oddBefore[i]=oddSum;
            evenBefore[i]=evenSum;
            if(i%2) oddSum+=nums[i]; else evenSum+=nums[i];
        }
        int oddAfter[n];
        int evenAfter[n];
        oddSum=0,evenSum=0;
        for(int i=n-1;i>=0;i--)
        {
            oddAfter[i]=oddSum;
            evenAfter[i]=evenSum;
            if(i%2) oddSum+=nums[i]; else evenSum+=nums[i];
        }
        int ans=0;
        for(int i=0;i<n;i++) 
        {
            if(oddBefore[i]+evenAfter[i]==oddAfter[i]+evenBefore[i]) ans++;
        }
        return ans;
    }
};