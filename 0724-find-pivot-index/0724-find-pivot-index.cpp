class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rs=0,n=nums.size(),ls=0;
        for(int i=0;i<n;i++) rs+=nums[i];
        for(int i=0;i<n;i++){
            rs-=nums[i];
            if(ls==rs) return i;
            // cout<<"ls: "<<ls<<" rs: "<<rs<<endl;
            ls+=nums[i];
        }
        return -1;
    }
};