class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int ans=0;
        unordered_map<int,int> freq;
        for(int i=0;i<answers.size();i++){
            if(answers[i]==0) ans++;
            else freq[answers[i]]++;
        }
        for(auto it:freq)
            ans=ans+(it.first+1)*ceil(((float)it.second/(it.first+1)));
        return ans;
    }
};