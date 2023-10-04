class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int one=0,zero=0;
            for(auto it:nums){
                if((it>>i)&1) one++;
                else zero++;
            }
            ans+=one*zero;
        }
        return ans;
    }
};