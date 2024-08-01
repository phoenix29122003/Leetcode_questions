class Solution {
public:
    int maxOperations(string s) {
        vector<int>one;
        int i=s.length()-1;
        bool first_zero=false;
        int cnt=0;
        while(i>=0){
            if(s[i]=='0' && first_zero==false){
                first_zero=true;
            }
            if(first_zero){
                if(s[i]=='1') cnt++;
                else{
                    one.push_back(cnt);
                    cnt=0;
                }
            }
            i--;
        }
        one.push_back(cnt);
        reverse(one.begin(),one.end());
        int ans=0,c=0;
        for(auto it:one){
            if(it>0){
                c+=it;
                ans+=c;
            }
        }
        return ans;
    }
};