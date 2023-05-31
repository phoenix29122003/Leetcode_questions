class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(a || b || c)
        {
            int a1=a&1,b1=b&1,c1=c&1;
            if(c1==0)
            {
                if(a1+b1==0) ans+=0;
                else if(a1+b1==1) ans+=1;
                else if(a1+b1==2) ans+=2;
            }
            else
            {
                if(a1+b1==0) ans+=1;
                else if(a1+b1==1) ans+=0;
                else if(a1+b1==2) ans+=0;
            }
            a/=2,b/=2,c/=2;
        }
        return ans;
    }
};