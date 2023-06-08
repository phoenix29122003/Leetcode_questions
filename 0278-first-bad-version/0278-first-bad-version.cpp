class Solution {
public:
    int firstBadVersion(int n) {
        long long int ans;
        long long int l=1,h=n;
        while(l<=h)
        {
            long long int m=(l+h)/2;
            if(!isBadVersion(m)) l=m+1;
            else
            {
                if(m==1 || (m>1 && !isBadVersion(m-1))) 
                {
                    ans=m;
                    break;
                }
                h=m-1;
            }
        }
        return ans;
    }
};