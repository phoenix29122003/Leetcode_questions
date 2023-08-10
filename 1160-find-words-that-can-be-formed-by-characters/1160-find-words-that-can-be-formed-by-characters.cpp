class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            unordered_map<char,int>mp;
            for(auto it:chars) mp[it]++;
            int f=0;
            for(auto it:words[i]) {
                if(mp.find(it)==mp.end()){
                    f=1;
                    break;
                }
                else if(mp[it]==0){
                    f=1;
                    break;
                }
                else mp[it]--;
            }
            if(f==0) ans+=words[i].length();
        }
        return ans;
    }
};