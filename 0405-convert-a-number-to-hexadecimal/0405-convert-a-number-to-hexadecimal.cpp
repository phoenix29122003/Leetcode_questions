class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";
        string ans="";
        unsigned n=num;
        while(n){
            int rem=n%16;
            if(rem<10) ans+='0'+rem;
            else{
                rem=rem%10;
                ans+='a'+rem;
            }
            n=n/16;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};