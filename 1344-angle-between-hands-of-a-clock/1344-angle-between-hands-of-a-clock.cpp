class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ha=(60*hour+minutes)*0.5;
        double ma=minutes*6;
        double ans=abs(ha-ma);
        return ans<=180?ans:360-ans;
    }
};