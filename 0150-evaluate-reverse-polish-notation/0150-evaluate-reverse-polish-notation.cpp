class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>num;
        for(auto it:tokens){
            if(it=="+" || it=="-" || it=="*" || it=="/"){
                int num1=num.top();
                num.pop();
                int num2=num.top();
                num.pop();
                if(it=="/") num.push(num2/num1);
                else if(it=="*") num.push(num2*num1);
                else if(it=="+") num.push(num2+num1);
                else num.push(num2-num1);
            }
            else num.push(stoi(it));
        }
        return num.top();
    }
};