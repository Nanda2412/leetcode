class Solution {
    int getLatestDigit(const string& time, int idx) {
        int result = -1;
        switch(idx) {
            case 0:
                if(time[1] - '0' < 4 || time[1] == '?') result = 2;
                else result = 1;
                break;
            case 1:
                if(time[0] - '0' < 2) result = 9;
                else result = 3;
                break;
            case 3:
                result = 5;
                break;
            case 4:
                result = 9;
                break;
        }

        return result;
    }
public:
    string maximumTime(string time) {
        for(int i = 0; i < time.size(); ++i) {
            if(time[i] == '?') {
                time[i] = getLatestDigit(time, i) + '0';
            }
        }

        return time;
    }
};
