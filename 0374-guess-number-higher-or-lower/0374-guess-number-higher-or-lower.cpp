class Solution {
public:
    int guessNumber(int n) {
        long long int l=1,h=n,m,ans;
        while(l<=h)
        {
            m=(l+h)/2;
            if(guess(m)==0) 
            {
                ans=m;
                break;
            }
            else if(guess(m)==-1) h=m-1;
            else l=m+1;
        }
        return ans;
    }
};