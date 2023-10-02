// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l=1,h=2147483647,m,ans;
        while(l<=h){
            m=(l+h)/2;
            if(isBadVersion(m)){
                ans=m;
                h=m-1;
            }
            else l=m+1;
        }
        return ans;
    }
};