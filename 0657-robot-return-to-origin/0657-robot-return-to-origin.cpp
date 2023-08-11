class Solution {
public:
    bool judgeCircle(string moves) {
        int cnt1=0,cnt2=0;
        for(auto it:moves){
            if(it=='U') cnt1++;
            else if(it=='D') cnt1--;
            else if(it=='R') cnt2++;
            else cnt2--;
        }
        return cnt1==0 && cnt2==0;
    }
};