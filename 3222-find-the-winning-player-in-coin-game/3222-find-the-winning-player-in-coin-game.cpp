class Solution {
public:
    string losingPlayer(int x, int y) {
        bool flag=false;
        while(1){
            x-=1, y-=4;
            flag=!flag;
            if(x<0 || y<0) break;
        } 
        if(!flag) return "Alice";
        else return "Bob";
        return "";
    }
};