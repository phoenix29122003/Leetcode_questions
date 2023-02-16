class Solution {
public:
    string removeOuterParentheses(string S) {
        int count=0;
        string str;
        for(char c:S)
        {
            if(c=='(')
            {
                count++;
                if(count>1) str+='(';
            }
            else 
            {
                count--;
                if(count>0) str+=')';
            }
        }
        return str;
    }
};