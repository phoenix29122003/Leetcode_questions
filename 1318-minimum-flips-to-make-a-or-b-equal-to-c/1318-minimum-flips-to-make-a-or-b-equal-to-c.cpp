class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(a or b or c){
            int bit1=a&1;
            int bit2=b&1;
            int bit3=c&1;
            if(bit1==0 && bit2==0 && bit3==1) ans+=1;
            if(bit1==0 && bit2==1 && bit3==0) ans+=1;
            if(bit1==1 && bit2==0 && bit3==0) ans+=1;
            if(bit1==1 && bit2==1 && bit3==0) ans+=2;
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return ans;
    }
};