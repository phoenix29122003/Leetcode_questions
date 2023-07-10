class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0,m=name.size(),n=typed.size();
        while(j<n)
        {
            if(name[i]==typed[j]) i++;
            else if(!j || typed[j]!=typed[j-1]) return false;
            j++;
        }
        return i==m;
    }
};