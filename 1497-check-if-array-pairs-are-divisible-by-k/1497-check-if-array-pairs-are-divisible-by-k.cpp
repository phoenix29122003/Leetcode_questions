class Solution {
public:
    bool canArrange(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[((it%k)+k)%k]++;
            cout<<it%k<<" "<<endl;
        } 
        for(auto it:mp){
            if(it.first==0){
                if(it.second%2==1) return false;
            }
            else{
                if(it.second!=mp[k-it.first]) return false;
            }
        }
        return true;
    }
};