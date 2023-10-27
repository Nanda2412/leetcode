class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        auto cnt_1 = count(s.begin(), s.end(), '1');
        s[s.size() - 1] = '1', --cnt_1;

        for(int i = 0; i < cnt_1; ++i) {
            s[i] = '1';
        }

        for(int i = cnt_1; i < s.size() - 1; ++i) {
            s[i] = '0';
        }

        return s;
    }
};
