class Solution {
public:
    int countTime(string time) {
        if(time.find('?') == string::npos) return 1;

        const auto validHours = [](char a, char b) {
            if(a == '?' && b == '?') return 24;
            if(a == '?' && b != '?') {
                if(b - '0' > 3) return 2;
                return 3;
            }
            if(a != '?' && b == '?') {
                if(a - '0' <= 2) {
                    if(a - '0' == 2) return 4;
                    return 10;
                }
            }

            return 1;
        };

        const auto validMins = [](char a, char b) {
            if(a == '?' && b == '?') return 60;
            if(a == '?' && b != '?') return 6;
            if(a != '?' && b == '?') {
                if(a - '0' <= 5) return 10;
            }

            return 1;
        };

        return validHours(time[0], time[1]) * validMins(time[3], time[4]);
    }
};
