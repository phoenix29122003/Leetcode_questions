class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int j=n-1;
        vector<int>ans(n);
        for(int i=1;i<n;i+=2) ans[i]=nums[j--];
        for(int i=0;i<n;i+=2) ans[i]=nums[j--];
        nums=ans;
    }
};