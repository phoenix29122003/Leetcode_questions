class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        vector<int>lr(n,INT_MIN),rl(n,INT_MAX);
        lr[0]=nums[0],rl[n-1]=nums[n-1];
        for(int i=1;i<n;i++) lr[i]=max(lr[i-1],nums[i]);
        for(int i=n-2;i>=0;i--) rl[i]=min(rl[i+1],nums[i]);
        for(int i=0;i<n-1;i++){
            if(lr[i]<=rl[i+1]) return i+1;
        }
        return 0;
    }
};