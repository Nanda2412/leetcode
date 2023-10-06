class Solution {
public:
    bool checkRecord(string s) {
        int count_A = 0, count_L = 1;

        for(int i = 0; i < s.size(); ++i) {
            count_A += s[i] == 'A';
            if(count_A >= 2) return false;

            count_L = i > 0 && s[i] == 'L' && s[i - 1] == 'L' ? count_L + 1 : 1;
            if(count_L == 3) return false;
        }

        return true;
    }
};
