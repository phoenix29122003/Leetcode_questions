class Solution {
public:
    bool canReorderDoubled(vector<int>& A) {
        map<int,int>m;
        int n=A.size();
        for(int i=0;i<n;i++) m[A[i]]++;
        int cnt=A.size();
        map<int,int>::iterator it=m.begin();
        while(it!=m.end()){
            if(m[it->first]>0){
                if(it->first!=0 && m[it->first*2]>0){
                    int x=min(m[it->first],m[it->first*2]);
                    cnt-=(x*2);
                    m[it->first*2]-=x;
                    m[it->first]-=x;
                }
                else if(it->first==0){
                   cnt-=m[it->first];
                   m[it->first]=0;
                }
            }
            it++;
        }
        return !cnt;
    }
};