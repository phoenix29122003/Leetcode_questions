class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        unordered_set<string>set;
        for(int i=0;i<words.size();i++)
        {
            string odd,even;
            for(int j=0;j<words[i].length();j+=2) even.push_back(words[i][j]);
            for(int j=1;j<words[i].size();j+=2) odd.push_back(words[i][j]);
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
            set.insert(odd+even);
        }
        return set.size();
    }
};