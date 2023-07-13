class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%3) return false;
        int first=0,second=0,third=0;
        int prefsum=0,avg=sum/3;
        for(auto it:nums) 
        {
            prefsum+=it;
            if(!first && prefsum==avg) first=true;
            else if(first && !second && prefsum==2*avg) second=true;
            else if(first && second && !third && prefsum==3*avg) third=true;
        }
        return first && second && third;
    }
};